# Feature Tour
Progressively introduce language elements.

## Environment Declaration
```
env native;
```
Only `native` supported now.

## Variables & Expressions
```
env native;
int a = 4;
int b = a + 3 * 2;
print("b:", b);
```
Supported operators: + - * / (integer only).

## Booleans
```
env native;
print(true, false);
int x = true + 1; // x = 2
```
`true` -> 1, `false` -> 0 (temporary model).

## Friend Modules
```
env native;
friend native_math: cpp as m;
print(m.add(5,4));
```
Build with:
```
./build/ez_main examples/yourfile.ez --build --run
```

## Printing
`print` and `printf` accept mixed literals and expressions.

## Access Modifiers
Applied only inside classes; private calls blocked from top-level.

## Verbose Mode
Add `--verbose` to surface evaluation results (`=>` lines), build plan, variable state.

## What’s Next
- `concepts/expressions.md` for operator roadmap
- `architecture/overview.md` for pipeline
