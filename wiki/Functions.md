# Functions

Functions in EZ Language: declaration, visibility, and execution status.

## Overview

EZ Language supports class-scoped functions with visibility modifiers. Function grammar is fully implemented, but **function execution is not yet available** in the current interpreter.

## Function Declaration Syntax

Functions are declared within classes:

```ez
class Calculator() {
    public int add(int a, int b) {
        a + b;
    }
    
    private int multiply(int x, int y) {
        x * y;
    }
}
```

### Declaration Components

```ez
<visibility> <return_type> <name>(<parameters>) { <body> }
```

- **`visibility`** - `public`, `private`, or `protected` (optional, defaults to `public`)
- **`return_type`** - Return type (`int`, `float`, `void`, etc.)
- **`name`** - Function identifier
- **`parameters`** - Comma-separated parameter list with types
- **`body`** - Function body (currently treated as expression sequence)

## Visibility Modifiers

### Public Functions

Default visibility when no modifier is specified:

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

### Private Functions

Cannot be called from outside the class:

```ez
class Demo() {
    private int secret() {
        100;
    }
}

// This would produce an error:
// Demo.secret();  // Error: cannot call private method outside class
```

### Protected Functions

Parsed but not yet semantically meaningful. Using `protected` generates a diagnostic:

```ez
class Demo() {
    protected int helper() {  // Warning: protected not yet implemented
        50;
    }
}
```

Learn more: [Visibility](Visibility)

## Current Implementation Status

### ✅ Supported (Grammar)

- Function declarations within classes
- Parameter lists with types
- Visibility modifiers (`public`, `private`, `protected`)
- Return type specifications
- Function body syntax

### ❌ Not Yet Implemented (Interpreter)

- **Function execution:** Function bodies are not executed
- **Function calls:** User-defined functions cannot be called
- **Return statements:** `return` keyword not yet processed
- **Parameter passing:** Parameters not yet bound to arguments
- **Type checking:** Parameter type validation not enforced

### ✅ Semantic Checks (Enforced)

- **Private access control:** Private functions blocked from top-level calls
- **Invalid modifiers:** Top-level functions with visibility modifiers produce errors

## Built-in Functions

While user-defined functions aren't executed yet, built-in functions work:

### print

```ez
env native;
print("Hello");
print("Value:", 42);
print("Sum:", 1 + 2);
```

### printf

```ez
env native;
int x = 100;
printf("Value: %d\n", x);
```

Learn more: [Printing and Debugging](Printing-and-Debugging)

## Friend Module Functions

Functions from friend modules can be called:

```ez
env native;
friend native_math: cpp as m;
int result = m.add(5, 3);
print("result:", result);
```

Learn more: [Friend Modules](Friend-Modules)

## Examples (Grammar Only)

These examples are syntactically valid but not yet executable:

### Simple Function

```ez
class Math() {
    public int square(int x) {
        x * x;
    }
}
```

### Multiple Parameters

```ez
class Calculator() {
    public int compute(int a, int b, int c) {
        (a + b) * c;
    }
}
```

### Different Return Types

```ez
class Utilities() {
    public int getInt() {
        42;
    }
    
    public void doNothing() {
        // Empty body
    }
    
    public float getFloat() {
        3.14;
    }
}
```

### Mixed Visibility

```ez
class Service() {
    public int publicMethod(int x) {
        x + _privateHelper(x);
    }
    
    private int _privateHelper(int x) {
        x * 2;
    }
}
```

## Error Cases

### Top-level Function with Visibility Modifier

Visibility modifiers are only valid inside classes:

```ez
env native;
public int myFunction() {  // Error: invalid modifier on top-level function
    42;
}
```

```
Error: visibility modifiers not allowed on top-level declarations
```

**Fix:** Remove the modifier or move the function inside a class.

### Calling Private Method Outside Class

```ez
class Demo() {
    private int secret() {
        100;
    }
}

secret();  // Error: cannot call private method outside class
```

```
Error: cannot call private method outside class scope
```

**Fix:** Make the method public or call it from within the class.

## Return Statements

Return statements are parsed but not yet executed:

```ez
class Calculator() {
    public int add(int a, int b) {
        return a + b;  // Parsed, not executed
    }
}
```

Currently, function bodies are treated as expression sequences. The `return` keyword is recognized by the grammar but doesn't affect execution.

## Roadmap

Upcoming function features:

### Phase 1: Basic Execution

- Execute function bodies
- Return value handling
- Parameter binding

### Phase 2: Advanced Features

- Function calls with arguments
- Recursive functions
- Local variables within functions

### Phase 3: Type System Integration

- Parameter type checking
- Return type validation
- Type inference

### Phase 4: Advanced Capabilities

- Default parameters
- Variadic functions
- Function overloading

## Workaround: Friend Modules

Until user-defined functions are executable, use friend modules for complex logic:

**native_math.cpp:**

```cpp
extern "C" int compute(int a, int b, int c) {
    return (a + b) * c;
}
```

**program.ez:**

```ez
env native;
friend native_math: cpp as m;
int result = m.compute(5, 3, 2);
print("result:", result);
```

Learn more: [Friend Modules](Friend-Modules) and [Embedding Native Code](Embedding-Native-Code)

## Related Topics

- [Visibility](Visibility) - Access control details
- [Types](Types) - Return types and parameters
- [Friend Modules](Friend-Modules) - Callable native functions
- [Grammar Reference](Grammar-Reference) - Formal function syntax

---

**See Also:** [Visibility](Visibility) | [Types](Types) | [Friend Modules](Friend-Modules)
