# Code Generation (C)

Subset codegen translates int-only constructs to C.

Stages:
1. Traverse parse tree for supported subset.
2. Emit `.c` file into `.ezbuild/<stem>.c`.
3. Compile with `clang -std=c11` when `--build-native` or `--run-native`.

Limitations:
- Function bodies and friend calls not yet lowered in C path.
- No boolean distinct type (1/0 integer semantics).

Roadmap:
- Generate wrappers for friend calls
- Support returns and control flow
