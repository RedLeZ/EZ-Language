# Visibility

Access control and visibility modifiers in EZ Language.

## Overview

EZ Language supports visibility modifiers for class members to control access. These modifiers determine which code can access functions and variables.

## Supported Modifiers

### Public

**Default visibility** when no modifier is specified. Public members can be accessed from anywhere.

```ez
class Demo() {
    public int getValue() {
        42;
    }
    
    // Also public (implicit)
    int getOther() {
        10;
    }
}
```

### Private

Private members cannot be accessed from outside their class.

```ez
class Calculator() {
    private int secret() {
        100;
    }
    
    public int getSecret() {
        secret();  // OK: called within the same class
    }
}

// Error: cannot call private method from top-level
// Calculator.secret();
```

**Convention:** Private member names often start with underscore:

```ez
class Service() {
    public int process(int x) {
        _internalHelper(x);
    }
    
    private int _internalHelper(int x) {
        x * 2;
    }
}
```

### Protected

Protected is parsed by the grammar but **not yet semantically meaningful**. Using `protected` generates a diagnostic warning.

```ez
class Demo() {
    protected int helper() {  // Warning: protected not yet implemented
        50;
    }
}
```

**Planned behavior:** Protected members will be accessible within the class and its subclasses.

## Scope Rules

### Class Members

Visibility modifiers are valid for class members:

```ez
class MyClass() {
    public int publicVar = 1;
    private int privateVar = 2;
    
    public int publicMethod() { 42; }
    private int privateMethod() { 100; }
}
```

### Top-level Declarations

**Visibility modifiers are not allowed on top-level declarations.** Using them produces an error:

```ez
env native;
private int x = 10;  // Error: invalid modifier on top-level
```

```
Error: visibility modifiers not allowed on top-level declarations
```

**Fix:** Remove the visibility modifier:

```ez
env native;
int x = 10;  // OK
```

## Private Access Enforcement

### Friend Module Functions

Friend module functions that start with underscore are considered private:

**native_math.cpp:**

```cpp
extern "C" int add(int a, int b) {
    return a + b;
}

extern "C" int _internalHelper(int x) {
    return x * 2;
}
```

**program.ez:**

```ez
env native;
friend native_math: cpp as m;

print(m.add(3, 2));              // OK: public function
// print(m._internalHelper(5));  // Error: private function
```

```
Error: cannot call private function: m._internalHelper
```

Learn more: [Friend Modules](Friend-Modules)

### Class Method Access

Private class methods cannot be called from top-level code:

```ez
class Calculator() {
    private int compute(int x) {
        x * 2;
    }
}

// compute(5);  // Error: cannot call private method outside class
```

```
Error: cannot call private method outside class scope
```

## Semantic Validation

EZ performs semantic checks for visibility violations:

### Private Access Check

Attempting to call private members from outside their scope:

```ez
class Demo() {
    private int secret = 100;
}

// int x = Demo.secret;  // Error: private access
```

### Invalid Modifier Placement

Using visibility modifiers where they're not allowed:

```ez
env native;
public int globalVar = 5;  // Error
```

## Examples

### Public Interface, Private Implementation

```ez
class Service() {
    public int process(int value) {
        _validate(value);
        _transform(value);
    }
    
    private int _validate(int value) {
        // Validation logic
        value;
    }
    
    private int _transform(int value) {
        value * 2 + 10;
    }
}
```

### Mixed Visibility

```ez
class DataProcessor() {
    public int process(int data) {
        int cleaned = _clean(data);
        int validated = _validate(cleaned);
        _finalize(validated);
    }
    
    private int _clean(int data) {
        data;
    }
    
    private int _validate(int data) {
        data;
    }
    
    private int _finalize(int data) {
        data;
    }
}
```

## Best Practices

### 1. Use Private for Internal Logic

Keep internal helper functions private:

```ez
class Calculator() {
    public int compute(int a, int b) {
        _helper(a, b);
    }
    
    private int _helper(int a, int b) {
        // Internal logic
        (a + b) * 2;
    }
}
```

### 2. Underscore Convention

Prefix private members with underscore for clarity:

```ez
class Service() {
    private int _internalState = 0;
    private int _privateMethod() { 42; }
}
```

### 3. Minimize Public API

Expose only what's necessary; keep implementation details private:

```ez
class API() {
    // Public interface
    public int doSomething(int input) {
        _step1(input);
        _step2(input);
        _step3(input);
    }
    
    // Private implementation
    private int _step1(int x) { x + 1; }
    private int _step2(int x) { x * 2; }
    private int _step3(int x) { x - 3; }
}
```

## Error Messages

### Private Access Violation

```
Error: cannot call private function: functionName
Error: cannot call private method outside class scope
Error: cannot access private member: memberName
```

### Invalid Modifier

```
Error: visibility modifiers not allowed on top-level declarations
Error: 'protected' modifier not yet implemented
```

## Roadmap

Upcoming visibility features:

### Protected Access

Full implementation of `protected` modifier:
- Access from derived classes
- Access control enforcement
- Inheritance semantics

### Package/Module Visibility

```ez
// Future: package-private visibility
internal int packageFunction() { 42; }
```

### Friend Classes

```ez
// Future: friend class declarations
class A() friend B {
    private int secret = 100;
}

class B() {
    // Can access A's private members
}
```

## Related Topics

- [Functions](Functions) - Function visibility modifiers
- [Friend Modules](Friend-Modules) - Private friend functions
- [Types](Types) - Member variable visibility
- [Semantics Pass](Semantic-Pass) - Visibility validation

---

**See Also:** [Functions](Functions) | [Friend Modules](Friend-Modules) | [Architecture Overview](Architecture-Overview)
