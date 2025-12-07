# Quickstart

Get up and running with EZ Language in 5 minutes!

## Prerequisites

You'll need:
- CMake
- A C++ compiler (GCC, Clang, or MSVC)
- (Optional) Nix for reproducible environments

## Build EZ

```bash
cmake -S . -B build
cmake --build build
```

## 1. Your First Program

Create `examples/hello.ez`:

```ez
env native;
print("Hello EZ");
```

Run it:

```bash
./build/ez_main examples/hello.ez --run
```

Output (quiet mode):
```
Hello EZ
```

## 2. Add Arithmetic

Modify your program:

```ez
env native;
int x = 1 + 2 * 3;
print("x =", x);
```

Run it again:

```bash
./build/ez_main examples/hello.ez --run
```

Output:
```
x = 7
```

## 3. Use a Friend Module

Friend modules let you integrate native C/C++/Python code. Create `examples/demo.ez`:

```ez
env native;
friend native_math: cpp as m;
print("sum:", m.add(3, 2));
```

The `native_math.cpp` file should already be in the `examples/` directory. Build and run:

```bash
./build/ez_main examples/demo.ez --build --run
```

Output:
```
sum: 5
```

## 4. Explore Verbose Mode

To see what's happening under the hood (environment info, build plan, etc.):

```bash
./build/ez_main examples/demo.ez --build --run --verbose
```

This will show:
- Environment banner
- Friend module build plan
- Compile/link commands
- Evaluation results with `=>` markers
- Variable state

## 5. Next Steps

- **Deep Dive:** Read the [Feature Tour](Feature-Tour) for a comprehensive overview
- **Learn Concepts:** Explore [Friend Modules](Friend-Modules) and [Environment](Environment)
- **See Examples:** Check out the `examples/` directory in the repository
- **CLI Reference:** Learn all available flags in [CLI Reference](CLI-Reference)

## Quick Command Reference

```bash
# Run a program (quiet mode)
./build/ez_main program.ez --run

# Run with verbose output
./build/ez_main program.ez --run --verbose

# Build friend modules and run
./build/ez_main program.ez --build --run

# Emit C code
./build/ez_main program.ez --emit-c

# Build native executable
./build/ez_main program.ez --build-native

# Run native executable
./build/ez_main program.ez --run-native

# Prepare Nix environment
./build/ez_main program.ez --prepare

# Show environment info
./build/ez_main program.ez --env-info
```

---

**Next:** [Feature Tour](Feature-Tour) for a deeper exploration of EZ Language features
