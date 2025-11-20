# Glossary

| Term | Definition |
|------|------------|
| Environment | Execution context declared by `env native;` |
| Friend Module | External native/Python code linked via alias (e.g., `as m`) |
| Build Plan | Commands needed to compile/link friend modules |
| Quiet Mode | Default run output: only user prints |
| Verbose Mode | Expanded output: environment, plan, commands, results, variables |
| Semantic Pass | Post-parse validation enforcing access/modifier rules |
| Alias | Short name for friend module used in calls |
| Diagnostic | Error or warning message produced during pipeline |
| Primary Expression | Base unit in expression (identifier, literal, call, nested) |
