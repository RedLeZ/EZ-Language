# Contributing Setup

## Prerequisites
- CMake >= 3.10
- Clang/LLVM toolchain
- ANTLR4 (Java runtime + `antlr4` command)
- Python (optional for future friend modules): `python3`

## Build Steps
```
cmake -S . -B build
cmake --build build
```
Run example:
```
./build/ez_main examples/demo.ez --run
```

## Regenerate Grammar
```
antlr4 -Dlanguage=Cpp -Xexact-output-dir grammar/EZLanguage.g4 -o generated
cmake --build build
```

Report issues with reproduction commands and EZ source snippet.
