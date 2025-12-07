# Feature Tour

Welcome to the EZ Language feature tour! This guide walks through the language features incrementally.

## Environment Declaration

Every EZ program starts with an environment declaration:

```ez
env native;
```

This declares the execution environment. Currently supported:
- `native` - Standard native environment

Future environments will include specialized configurations with specific dependencies and tools.

### With Nix Integration

EZ can auto-generate and manage Nix environments:

```bash
# Prepare the environment (downloads dependencies)
./build/ez_main program.ez --prepare

# Run with auto-activation
./build/ez_main program.ez --run

# Skip environment activation
./build/ez_main program.ez --run --no-env

# Show environment info
./build/ez_main program.ez --env-info
```

Learn more: [Environment](Environment) and [Nix Environments](Nix-Environments)

## Variables and Expressions

### Integer Variables

```ez
env native;
int x = 42;
int y = x + 8;
print("y =", y);
```

### Arithmetic Operators

Supported operators (with standard precedence):
- `+` Addition
- `-` Subtraction
- `*` Multiplication
- `/` Division

```ez
env native;
int result = 1 + 2 * 3;  // result = 7
print("result:", result);
```

### Boolean Literals

```ez
env native;
int flag = true;   // true → 1
int other = false; // false → 0
print("flag:", flag);
```

Learn more: [Types](Types) and [Expressions](Expressions)

## Output: Print and Printf

### Basic Print

```ez
env native;
print("Hello, World!");
print("The answer is:", 42);
```

### Printf-style Formatting

```ez
env native;
int x = 100;
printf("Value: %d\n", x);
```

Learn more: [Printing and Debugging](Printing-and-Debugging)

## Friend Modules (Native Integration)

Friend modules let you call native C/C++/Python functions from EZ code.

### C++ Friend Module

Declare a friend:

```ez
env native;
friend native_math: cpp as m;
print("sum:", m.add(3, 2));
```

The corresponding `native_math.cpp`:

```cpp
extern "C" int add(int a, int b) {
    return a + b;
}
```

Build and run:

```bash
./build/ez_main program.ez --build --run
```

### Python Friend Module

```ez
env native;
friend math_utils: python as py;
print("result:", py.compute(10));
```

The corresponding `math_utils.py`:

```python
def compute(x):
    return x * 2 + 5
```

Learn more: [Friend Modules](Friend-Modules) and [Embedding Native Code](Embedding-Native-Code)

## C Code Emission

Generate C code from your EZ programs (currently supports integer-only subset):

```bash
# Emit C source code
./build/ez_main program.ez --emit-c

# Build native executable
./build/ez_main program.ez --build-native

# Run native executable
./build/ez_main program.ez --run-native
```

Generated C files are placed in `.ezenv/codegen/`.

Learn more: [Code Generation](Code-Generation)

## Quiet vs Verbose Modes

### Quiet Mode (Default)

Shows only user output from `print` and `printf`:

```bash
./build/ez_main program.ez --run
```

### Verbose Mode

Shows detailed execution information:

```bash
./build/ez_main program.ez --run --verbose
```

Verbose output includes:
- Environment banner
- Friend module build plan
- Compile and link commands
- Expression evaluation results (`=>`)
- Variable state tracking

## Visibility and Access Control

Control access to friend module members:

```ez
env native;
friend native_math: cpp as m;

// Public functions can be called
print(m.add(1, 2));

// Private functions generate errors
// print(m._internal_helper());  // Error!
```

Learn more: [Visibility](Visibility)

## Semantic Checks

EZ performs semantic validation:

- **Private Access:** Calling private (underscore-prefixed) functions
- **Invalid Modifiers:** Incorrect use of language modifiers
- **Type Mismatches:** Type consistency checks
- **Duplicate Aliases:** Friend module alias conflicts

Errors are reported with clear diagnostics.

Learn more: [Diagnostics](Diagnostics)

## What's Next?

Now that you've toured the features, dive deeper:

- [CLI Reference](CLI-Reference) - Master all command-line flags
- [Grammar Reference](Grammar-Reference) - Understand the syntax formally
- [Architecture Overview](Architecture-Overview) - Learn how EZ works internally
- [Contributing](Setup-Guide) - Join the community and contribute

---

**Previous:** [Quickstart](Quickstart) | **Next:** [Environment](Environment)
