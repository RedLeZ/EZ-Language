# Printing and Debugging

Output and debugging techniques in EZ Language.

## Built-in Print Functions

### print

The `print` function outputs values with automatic spacing and newline.

**Syntax:**

```ez
print(value1, value2, ...);
```

**Examples:**

```ez
env native;

// String literal
print("Hello, World!");

// Integer variable
int x = 42;
print("The answer is:", x);

// Multiple values
int a = 5;
int b = 10;
print("a:", a, "b:", b, "sum:", a + b);

// Boolean literals
print("true is:", true);   // Output: true is: 1
print("false is:", false); // Output: false is: 0
```

**Output:**

```
Hello, World!
The answer is: 42
a: 5 b: 10 sum: 15
true is: 1
false is: 0
```

### printf

The `printf` function provides formatted output similar to C's `printf`.

**Syntax:**

```ez
printf("format string", value);
```

**Format Specifiers:**

- `%d` - Integer
- `%s` - String (future)
- `%f` - Float (future)

**Examples:**

```ez
env native;

int x = 100;
printf("Value: %d\n", x);

int a = 5;
int b = 10;
printf("Sum: %d\n", a + b);
```

**Output:**

```
Value: 100
Sum: 15
```

**Note:** Currently only `%d` for integers is fully supported.

## Value Rendering

### Strings

String literals have quotes stripped in output:

```ez
print("Hello");  // Output: Hello (not "Hello")
```

### Numbers

Integer values are rendered directly:

```ez
int x = 42;
print(x);  // Output: 42
```

### Boolean Literals

When used as literals, rendered based on context:

```ez
print(true);   // Output: true (as literal string)
print(false);  // Output: false (as literal string)

int x = true;
print(x);      // Output: 1 (evaluated to integer)
```

### Expressions

Expressions are evaluated before printing:

```ez
print("Result:", 2 + 3 * 4);  // Output: Result: 14
```

### Friend Function Results

```ez
friend native_math: cpp as m;
print("Sum:", m.add(5, 3));  // Output: Sum: 8
```

## Quiet vs Verbose Modes

### Quiet Mode (Default)

Shows only user output from `print` and `printf`:

```bash
./build/ez_main program.ez --run
```

**Output:**
```
Hello, World!
42
```

### Verbose Mode

Shows detailed execution information:

```bash
./build/ez_main program.ez --run --verbose
```

**Output:**
```
==== Environment: native ====
Friend build plan:
  - native_math (cpp) as m
    Source: examples/native_math.cpp

Compiling native_math.cpp...

=> evaluating: 2 + 3
=> result: 5

=> evaluating: m.add(5, 3)
=> result: 8

Variable x = 5

Hello, World!
42
```

Verbose output includes:
- **Environment banner:** Shows active environment
- **Friend build plan:** Lists friend modules and build steps
- **Compile commands:** Shows compilation commands
- **Expression evaluation:** `=>` markers show intermediate results
- **Variable state:** Shows variable assignments
- **User output:** Your `print` and `printf` calls

## Debugging Techniques

### Track Variable Values

Use verbose mode to see variable assignments:

```ez
env native;
int x = 5;
int y = x + 10;
int z = y * 2;
print("Final:", z);
```

**Verbose output:**
```
Variable x = 5
=> evaluating: x + 10
=> result: 15
Variable y = 15
=> evaluating: y * 2
=> result: 30
Variable z = 30
Final: 30
```

### Trace Expression Evaluation

See how expressions are evaluated:

```ez
env native;
int result = 1 + 2 * 3 + 4;
print("result:", result);
```

**Verbose output:**
```
=> evaluating: 1 + 2 * 3 + 4
=> result: 11
Variable result = 11
result: 11
```

### Debug Friend Calls

Track friend function invocations:

```ez
env native;
friend native_math: cpp as m;

int a = m.add(5, 3);
int b = m.multiply(a, 2);
print("final:", b);
```

**Verbose output:**
```
=> evaluating: m.add(5, 3)
=> result: 8
Variable a = 8
=> evaluating: m.multiply(a, 2)
=> result: 16
Variable b = 16
final: 16
```

### View Build Process

See friend module compilation:

```bash
./build/ez_main program.ez --build --run --verbose
```

**Output includes:**
```
Friend build plan:
  - native_math (cpp) as m
    Source: examples/native_math.cpp
    Output: .ezenv/build/libm.dylib

Compiling native_math.cpp...
c++ -shared -fPIC -o .ezenv/build/libm.dylib examples/native_math.cpp
```

## Common Debugging Patterns

### Before and After

```ez
env native;
int x = 10;
print("Before:", x);

x = x * 2;
print("After:", x);
```

### Intermediate Steps

```ez
env native;
friend native_math: cpp as m;

int step1 = m.add(5, 3);
print("Step 1:", step1);

int step2 = m.multiply(step1, 2);
print("Step 2:", step2);

int step3 = m.add(step2, 10);
print("Step 3:", step3);
```

### Labeled Output

```ez
env native;
int width = 10;
int height = 20;
int area = width * height;

print("=== Rectangle Calculation ===");
print("Width:", width);
print("Height:", height);
print("Area:", area);
print("===========================");
```

## Environment Information

Check environment configuration:

```bash
./build/ez_main program.ez --env-info
```

Shows:
- Environment type
- Configuration source
- Nix environment status (if applicable)

## Advanced Debugging

### Combine with Native Debug Output

Add debug prints in your native code:

**debug_math.cpp:**

```cpp
#include <iostream>

extern "C" int add(int a, int b) {
    std::cout << "[DEBUG] add called with " << a << ", " << b << std::endl;
    return a + b;
}
```

**program.ez:**

```ez
env native;
friend debug_math: cpp as m;
int result = m.add(5, 3);
print("Result:", result);
```

**Output (verbose):**
```
[DEBUG] add called with 5, 3
=> evaluating: m.add(5, 3)
=> result: 8
Variable result = 8
Result: 8
```

### Filter Verbose Output

Pipe verbose output through grep for specific information:

```bash
# Show only variable assignments
./build/ez_main program.ez --run --verbose 2>&1 | grep "Variable"

# Show only friend calls
./build/ez_main program.ez --run --verbose 2>&1 | grep "=>"

# Show only user output (equivalent to quiet mode)
./build/ez_main program.ez --run --verbose 2>&1 | grep -v "^==\|^=>\|^Friend\|^Variable"
```

## Future Additions

Planned debugging features:

- **Log levels:** `log.debug()`, `log.info()`, `log.error()`
- **Source line tracing:** Show which line is executing
- **Breakpoint support:** Interactive debugging
- **Stack traces:** Function call stack
- **Variable watch:** Monitor variable changes
- **Assertion:** `assert(condition, message)`

## Related Topics

- [Expressions](Expressions) - Expression evaluation
- [Types](Types) - Value types and literals
- [CLI Reference](CLI-Reference) - Command-line flags
- [Friend Modules](Friend-Modules) - Native code integration

---

**See Also:** [CLI Reference](CLI-Reference) | [Expressions](Expressions) | [Quickstart](Quickstart)
