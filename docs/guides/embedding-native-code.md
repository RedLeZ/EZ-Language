# Embedding Native Code

Goal: Call compiled C/C++ (or Python) functions from EZ.

## 1. Declare Friend Module
```
friend native_math: cpp as m;
```
Ensure `examples/native_math.cpp` exists.

## 2. Call Functions
```
print(m.add(2,3));
```

## 3. Build & Run
```
./build/ez_main examples/demo.ez --build --run
```
Quiet mode suppresses build plan; verbose shows commands.

## 4. Troubleshooting
- Missing source file -> diagnostic line of friend statement
- Inconsistent argument counts -> diagnostic listing expected counts
- `dlopen failed` -> ensure you passed `--build` before `--run`

## 5. Python (future)
Python friends produce a shim and require proper Python environment.
