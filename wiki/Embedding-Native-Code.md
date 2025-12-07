# Embedding Native Code

Comprehensive guide to integrating C, C++, and Python code into EZ programs using friend modules.

## Overview

Friend modules enable you to call compiled C/C++ or Python functions directly from EZ code, combining the simplicity of EZ with the power of existing native libraries.

## Quick Start

### 1. Create Native Code

**examples/native_math.cpp:**

```cpp
extern "C" int add(int a, int b) {
    return a + b;
}

extern "C" int multiply(int a, int b) {
    return a * b;
}
```

**Important for C++:** Use `extern "C"` to prevent name mangling.

### 2. Declare Friend Module in EZ

**examples/demo.ez:**

```ez
env native;
friend native_math: cpp as m;
```

### 3. Call Functions

```ez
env native;
friend native_math: cpp as m;

int sum = m.add(2, 3);
int product = m.multiply(4, 5);

print("sum:", sum);
print("product:", product);
```

### 4. Build and Run

```bash
./build/ez_main examples/demo.ez --build --run
```

## Language-Specific Details

### C Integration

**math_funcs.c:**

```c
#include <stdio.h>

int square(int x) {
    return x * x;
}

int cube(int x) {
    return x * x * x;
}

void debug_print(int x) {
    printf("Debug: %d\n", x);
}
```

**program.ez:**

```ez
env native;
friend math_funcs: c as math;

int x = 5;
int sq = math.square(x);
int cb = math.cube(x);

print("square:", sq);
print("cube:", cb);
```

### C++ Integration

**geometry.cpp:**

```cpp
#include <cmath>

extern "C" {
    double circle_area(double radius) {
        return M_PI * radius * radius;
    }
    
    double triangle_area(double base, double height) {
        return 0.5 * base * height;
    }
}
```

**program.ez:**

```ez
env native;
friend geometry: cpp as geo;

// Note: Currently only int is fully supported
// This is for future when double/float work
```

**Best Practice:** Wrap all exported functions in `extern "C"` block.

### Python Integration

**data_processor.py:**

```python
def process(value):
    return value * 2 + 10

def validate(value):
    return 1 if value > 0 else 0
```

**program.ez:**

```ez
env native;
friend data_processor: python as proc;

int result = proc.process(15);
int valid = proc.validate(result);

print("result:", result);
print("valid:", valid);
```

Python friends generate a shim and require a proper Python environment.

## Build Process

### Build Friend Modules

```bash
./build/ez_main program.ez --build
```

This compiles friend modules and creates shared libraries in `.ezenv/build/`:

**macOS:**
- `lib<alias>.dylib`

**Linux:**
- `lib<alias>.so`

**Windows:**
- `<alias>.dll`

### Build Output Location

```
your_project/
├── program.ez
├── native_math.cpp
└── .ezenv/
    └── build/
        └── libm.dylib  (or .so on Linux)
```

### Verbose Build

See detailed build commands:

```bash
./build/ez_main program.ez --build --run --verbose
```

Output includes:
```
Friend build plan:
  - native_math (cpp) as m
    Source: examples/native_math.cpp
    Output: .ezenv/build/libm.dylib

Compiling native_math.cpp...
c++ -shared -fPIC -o .ezenv/build/libm.dylib examples/native_math.cpp
```

## Function Signatures

### Argument Types

Currently supported:
- `int` - 32-bit integers
- Return type: `int`

**Example:**

```cpp
extern "C" int compute(int a, int b, int c) {
    return (a + b) * c;
}
```

```ez
friend compute_lib: cpp as comp;
int result = comp.compute(5, 3, 2);  // (5 + 3) * 2 = 16
```

### Return Values

Functions must return values compatible with EZ types:

```cpp
extern "C" int get_value() {
    return 42;
}

extern "C" int check_condition(int x) {
    return x > 10 ? 1 : 0;  // Return int as boolean
}
```

## Private Functions

Functions starting with underscore are private:

**utils.cpp:**

```cpp
extern "C" {
    // Public: can be called from EZ
    int process(int x) {
        return _internal_helper(x) * 2;
    }
    
    // Private: cannot be called from EZ
    int _internal_helper(int x) {
        return x + 10;
    }
}
```

**program.ez:**

```ez
env native;
friend utils: cpp as u;

int result = u.process(5);          // OK
// int bad = u._internal_helper(5);  // Error: private function
```

## Error Handling

### Missing Source File

```
Error: Friend module source not found: native_math.cpp
```

**Fix:** Ensure the source file exists in the same directory or in `examples/`.

### Inconsistent Argument Count

```ez
friend native_math: cpp as m;
int result = m.add(1);  // add expects 2 arguments
```

```
Error: Function m.add expects 2 arguments, got 1
```

**Fix:** Match the function signature in the native code.

### Dynamic Library Loading Failed

```
Error: dlopen failed: .ezenv/build/libm.dylib: cannot open shared object file
```

**Fix:** Make sure you used `--build` before `--run`:

```bash
./build/ez_main program.ez --build --run
```

### Compilation Errors

If native code has syntax errors, the build will fail with compiler output. Check verbose mode:

```bash
./build/ez_main program.ez --build --verbose
```

## Advanced Patterns

### Multiple Friend Modules

```ez
env native;
friend math_ops: cpp as math;
friend string_ops: cpp as str;
friend data_ops: python as data;

int x = math.add(5, 3);
int y = data.process(x);
```

### Calling Chain

```ez
env native;
friend native_math: cpp as m;

int a = 5;
int b = m.add(a, 3);          // 8
int c = m.multiply(b, 2);     // 16
int d = m.add(c, m.add(1, 1)); // 18

print("result:", d);
```

### Conditional Logic (via native code)

Since EZ doesn't yet support conditionals, implement them in native code:

**logic.cpp:**

```cpp
extern "C" int max(int a, int b) {
    return (a > b) ? a : b;
}

extern "C" int min(int a, int b) {
    return (a < b) ? a : b;
}

extern "C" int clamp(int value, int low, int high) {
    if (value < low) return low;
    if (value > high) return high;
    return value;
}
```

## Troubleshooting

### Checklist

1. ✅ Source file exists in correct location
2. ✅ `extern "C"` used for C++ code
3. ✅ Function signatures match calls
4. ✅ `--build` flag used before `--run`
5. ✅ Correct language specified (`c`, `cpp`, `python`)

### Debug with Verbose Mode

```bash
./build/ez_main program.ez --build --run --verbose
```

This shows:
- Environment setup
- Friend build plan
- Compile commands
- Link commands
- Execution output

### Manual Compilation

Test compilation manually:

```bash
# C++
c++ -shared -fPIC -o libtest.dylib test.cpp

# C
gcc -shared -fPIC -o libtest.so test.c
```

## Future Enhancements

- **More types:** `float`, `double`, `string`, arrays
- **Pointers:** Pass by reference
- **Structs:** Custom data types
- **Callbacks:** Native code calling EZ functions
- **Async:** Asynchronous native operations

## Related Topics

- [Friend Modules](Friend-Modules) - Friend module reference
- [CLI Reference](CLI-Reference) - Build and run flags
- [Visibility](Visibility) - Private function access control
- [Examples](https://github.com/RedLeZ/EZ-Language/tree/main/examples) - Working examples

---

**See Also:** [Friend Modules](Friend-Modules) | [Quickstart](Quickstart) | [CLI Reference](CLI-Reference)
