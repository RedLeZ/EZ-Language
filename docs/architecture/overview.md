# Architecture Overview

Pipeline:
1. Read source file.
2. Lex & parse via ANTLR grammar.
3. Bootstrap listener collects declarations & friend modules.
4. Semantic checks (visibility, invalid modifiers).
5. Build plan created for friend modules.
6. (Optional) Build friend modules.
7. Interpreter executes variable declarations, expressions, friend calls, print/printf.
8. (Optional) C code emission + native build/run.

Design goals: simplicity, progressive features, clear separation of concerns.
