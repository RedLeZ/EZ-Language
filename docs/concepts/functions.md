# Functions

Grammar supports class-scoped functions:
```
class Demo() {
    public int add1(int x) { x + 1; }
    private int secret(int x) { x * 2; }
}
```
Interpreter state:
- Does not execute function bodies (no call resolution for user-defined methods yet).
- Private access enforced semantically (blocked from top-level calls).
- Return statements not yet implemented; body treated as expression sequence placeholder.

Roadmap:
- Actual function execution
- Return semantics
- Parameter type checking
