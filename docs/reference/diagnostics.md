# Diagnostics

| Message | Cause | Fix |
|---------|-------|-----|
| missing environment declaration | No `env native;` at top | Add first line `env native;` |
| only the 'native' environment is supported | Other env used | Change to `env native;` |
| friend source file not found | Declared stem not present | Add/create source file or adjust name |
| unsupported friend language | Language not in {c, cpp, python} | Use supported language |
| duplicate friend alias | Same alias reused | Pick unique alias |
| inconsistent argument count | Same function called with differing arity | Align calls to same arity |
| dlopen failed | Dynamic library missing (not built) | Run with `--build` |
| unknown identifier 'X' | Variable not declared | Declare variable or fix typo |
| variable 'X' already declared | Duplicate declaration | Rename or remove duplicate |
| division by zero | `/` with zero RHS | Guard or adjust expression |
| operator 'op' not supported | Operator not implemented | Avoid or wait for support |
| cannot call private method 'X' outside class scope | Private method accessed globally | Move call inside class or change to public |
| access modifiers not allowed on top-level variable declarations | Modifier before top-level var | Remove modifier |
| only 'int' variables are supported in interpreter | Non-int variable type | Change type to int |
| floating point literals not supported yet | NUMBER with '.' | Use integer form |
| only numeric and boolean literals are supported | Unsupported literal type | Restrict to numeric/boolean |
| unsupported primary expression | Primary form not handled | Adjust expression |
| function calls are not supported in interpreter (only print/printf) | Non-built-in call | Add built-in or implement function execution |
| no library found for alias 'X' | Alias not built or declared | Check friend declaration/build |
| only up to 4 int arguments supported | Friend call with >4 args | Reduce arguments |
