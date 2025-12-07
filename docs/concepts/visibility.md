# Visibility

Supported modifiers (class members only):
- `public` (default when omitted)
- `private` (blocked outside class)
- `protected` (parsed but not yet semantically meaningful; diagnostic emitted)

Top-level variable declarations with modifiers produce a diagnostic.
Example:
```
private int y = 1; // error
```

Private method call from top-level:
```
class C() { private int secret(int x) { x + 1; } }
secret(3); // cannot call private method outside class scope
```
