# Friend Modules

Integrate native code (C/C++/Python) functions directly.

Declaration syntax:
```
friend native_math: cpp as m;
```
Parts:
- `native_math`: source stem (e.g. `native_math.cpp`)
- `cpp`: language (`c`, `cpp`, `python` supported)
- `as m`: alias used for calls (`m.add(...)`)

Build plan appears only in verbose mode.
Quiet mode still builds when `--build` is passed.

Usage example:
```
env native;
friend native_math: cpp as m;
print(m.add(2,3));
```
Run:
```
./build/ez_main examples/demo.ez --build --run
```

Diagnostics:
- Missing source
- Unsupported language
- Duplicate alias
- Inconsistent argument count
