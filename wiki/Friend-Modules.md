# Friend Modules

Friend modules enable seamless integration of native code (C, C++, Python) into EZ programs.

## Overview

A friend module declaration allows you to:
1. Link external code written in other languages
2. Call functions from that code using a simple alias
3. Build the native code automatically with `--build`

## Declaration Syntax

```ez
friend <stem>: <language> as <alias>;
```

### Components

- **`stem`** - Source file name without extension (e.g., `native_math` for `native_math.cpp`)
- **`language`** - One of `c`, `cpp`, or `python`
- **`alias`** - Short identifier used to call functions (e.g., `m` for `m.add(...)`)

## Supported Languages

### C (`c`)

```ez
env native;
friend math_funcs: c as m;
print("square:", m.square(5));
```

Corresponding `math_funcs.c`:

```c
int square(int x) {
    return x * x;
}
```

### C++ (`cpp`)

```ez
env native;
friend native_math: cpp as m;
print("sum:", m.add(3, 2));
```

Corresponding `native_math.cpp`:

```cpp
extern "C" int add(int a, int b) {
    return a + b;
}
```

**Important:** Use `extern "C"` to prevent C++ name mangling.

### Python (`python`)

```ez
env native;
friend math_utils: python as py;
print("result:", py.compute(10));
```

Corresponding `math_utils.py`:

```python
def compute(x):
    return x * 2 + 5
```

## Building and Running

### Build Friend Modules

```bash
./build/ez_main program.ez --build
```

This compiles friend modules and creates shared libraries in `.ezenv/build/`:
- C/C++ → `lib<alias>.dylib` (macOS) or `.so` (Linux)
- Python → Generated shim

### Build and Run Together

```bash
./build/ez_main program.ez --build --run
```

### Quiet vs Verbose

**Quiet mode** (default):
- Only shows user output
- Build happens silently

```bash
./build/ez_main program.ez --build --run
```

**Verbose mode:**
- Shows environment banner
- Displays friend build plan
- Shows compile/link commands

```bash
./build/ez_main program.ez --build --run --verbose
```

## Calling Friend Functions

Use the alias followed by a dot and the function name:

```ez
env native;
friend native_math: cpp as m;

int x = m.add(5, 3);        // Call and assign
print("sum:", m.add(10, 2)); // Call in expression
```

## Build Plan

In verbose mode, EZ shows the friend build plan:

```
Friend build plan:
  - native_math (cpp) as m
    Source: examples/native_math.cpp
    Output: .ezenv/build/libm.dylib
```

## Diagnostics

### Missing Source File

```
Error: Friend module source not found: native_math.cpp
```

**Fix:** Ensure the source file exists in the same directory or `examples/`.

### Unsupported Language

```ez
friend utils: rust as r;  // Not yet supported
```

```
Error: Unsupported friend language: rust
```

**Fix:** Use `c`, `cpp`, or `python`.

### Duplicate Alias

```ez
friend math_a: cpp as m;
friend math_b: cpp as m;  // Error: duplicate alias 'm'
```

```
Error: Duplicate friend module alias: m
```

**Fix:** Use unique aliases for each friend module.

### Inconsistent Argument Count

If you call a friend function with the wrong number of arguments:

```ez
friend native_math: cpp as m;
print(m.add(1));  // Error: expects 2 arguments
```

```
Error: Function m.add expects 2 arguments, got 1
```

**Fix:** Match the function signature.

## Private Functions

Friend functions prefixed with underscore are considered private:

```cpp
// native_math.cpp
extern "C" int add(int a, int b) { return a + b; }
extern "C" int _internal_helper(int x) { return x * 2; }
```

```ez
env native;
friend native_math: cpp as m;

print(m.add(1, 2));           // OK
print(m._internal_helper(5)); // Error: private function
```

Learn more: [Visibility](Visibility)

## Advanced: Multi-Module Programs

You can declare multiple friend modules:

```ez
env native;
friend native_math: cpp as math;
friend string_utils: cpp as str;
friend data_processor: python as proc;

int x = math.add(5, 3);
print("processed:", proc.process(x));
```

## File Structure

```
your_project/
├── program.ez
├── native_math.cpp
├── string_utils.cpp
├── data_processor.py
└── .ezenv/
    └── build/
        ├── libmath.dylib
        ├── libstr.dylib
        └── (python shims)
```

## Deep Dive

For more detailed information on native code integration:

- [Embedding Native Code](Embedding-Native-Code) - Comprehensive guide
- [Examples Directory](https://github.com/RedLeZ/EZ-Language/tree/main/examples) - Real examples

## Related

- [Quickstart](Quickstart) - Get started quickly
- [Feature Tour](Feature-Tour) - See friend modules in context
- [CLI Reference](CLI-Reference) - Build flags and options

---

**See Also:** [Environment](Environment) | [Visibility](Visibility) | [Architecture Overview](Architecture-Overview)
