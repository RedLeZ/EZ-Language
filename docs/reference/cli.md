# CLI Reference

Binary: `ez_main`

Flags:
- `--run` Execute interpreter
- `--build` Build friend modules
- `--plan` Show build plan only (no build) (verbose recommended)
- `--emit-c` Generate C source
- `--build-native` Compile emitted C
- `--run-native` Build + run native C executable
- `-v`, `--verbose` Show environment, friend plan, compile commands, evaluation results, variable state

Quiet vs Verbose Matrix:
| Feature | Quiet | Verbose |
|---------|-------|---------|
| Environment banner | hidden | shown |
| Friend build plan | hidden | shown |
| Compile/link commands | hidden | shown |
| Expression results (`=>`) | hidden | shown |
| Variable state | hidden | shown |

Examples:
```
./build/ez_main examples/demo.ez --run
./build/ez_main examples/demo.ez --build --run --verbose
```
