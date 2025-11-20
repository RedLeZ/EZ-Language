# Environment

The first line of every EZ source file declares the execution environment:
```
env native;
```
Only `native` is recognized. Missing or different values produce a diagnostic.

Future environments (ideas): `vm`, `wasm`, `sandbox`.

Diagnostics:
- Missing: "missing environment declaration"
- Unsupported: "only the 'native' environment is supported"
