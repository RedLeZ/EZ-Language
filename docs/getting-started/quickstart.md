# Quickstart

Goal: Run your first EZ program and a friend native module.

## 1. Create a file
`examples/hello.ez`:
```
env native;
print("Hello EZ");
```
Run:
```
./build/ez_main examples/hello.ez --run
```
Output (quiet):
```
Hello EZ
```

## 2. Add arithmetic
```
env native;
int x = 1 + 2 * 3;
print("x =", x);
```

## 3. Use a friend module
`examples/native_math.cpp` already provided; declare in `.ez`:
```
env native;
friend native_math: cpp as m;
print("sum:", m.add(3,2));
```
Build + run:
```
./build/ez_main examples/demo.ez --build --run
```
Verbose:
```
./build/ez_main examples/demo.ez --build --run --verbose
```

## 4. Explore verbose mode
Quiet hides environment/build plan; verbose reveals them.

## 5. Next Steps
- Read `getting-started/tour.md` for incremental features
- See `concepts/friend-modules.md` for native integration details
