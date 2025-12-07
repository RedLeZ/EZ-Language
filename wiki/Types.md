# Types

EZ Language type system overview and current implementation status.

## Currently Implemented Types

### Integer (`int`)

32-bit signed integers with full arithmetic support.

```ez
env native;
int x = 42;
int y = x + 8;
int z = x * y;
print("z =", z);
```

**Operations:**
- Arithmetic: `+`, `-`, `*`, `/`
- Assignment
- Pass to functions

### Boolean Literals

Boolean literals `true` and `false` are supported but internally coerced to integers:

```ez
env native;
int flag = true;   // flag = 1
int other = false; // other = 0
print("flag:", flag);    // Output: flag: 1
print("other:", other);  // Output: other: 0
```

**Current Limitation:** Booleans are not a distinct type; they evaluate to numeric 1 (true) or 0 (false).

### String Literals

Strings exist as literal tokens for printing but cannot yet be stored in variables:

```ez
env native;
print("Hello, World!");  // OK
// string msg = "Hello";  // Not yet supported
```

## Grammar-Defined Types (Not Yet Implemented)

The following types exist in the grammar but are not yet interpreted:

### Float

```ez
float x = 3.14;  // Parsed but not evaluated
```

### Void

```ez
void myFunction() { }  // Parsed but not executed
```

### Map

```ez
map<string, int> data;  // Parsed but not usable
```

## Type Declarations

### Variable Declaration

```ez
env native;
int x = 10;           // Declare with initial value
int y = x * 2;        // Initialize from expression
```

### Function Parameters (Parsed, Not Executed)

```ez
class Calculator() {
    public int add(int a, int b) {
        a + b;
    }
}
```

**Note:** Function execution is not yet implemented. See [Functions](Functions).

## Type Checking

### Current Checks

The interpreter performs basic type validation:

1. **Integer-only variables:** Only `int` variables are allowed
2. **Arithmetic type safety:** Operations must be on numeric values
3. **Literal type inference:** Literals are typed appropriately

### Error Cases

**Unsupported type variable:**

```ez
float x = 3.14;  // Error: float variables not supported
```

**Type mismatch in operations:**

```ez
int x = 5 + "hello";  // Error: cannot add int and string
```

## Interpreter Limitations

Current limitations in the interpreter:

1. **No boolean type tracking:** Booleans coerced to integers (1/0)
2. **No string variables:** Strings only as print literals
3. **No arrays or collections:** Maps and arrays not yet implemented
4. **No function parameter type checking:** Functions not yet executed

## Type Coercion

### Boolean to Integer

Automatic coercion:

```ez
env native;
int result = true && false;  // Will be: 1 && 0 → 0 (when boolean ops implemented)
```

### No Implicit Conversions

No automatic conversions between incompatible types:

```ez
// int x = "42";  // Error: no string-to-int conversion
// int y = 3.14;  // Error: no float-to-int conversion
```

## Roadmap

Upcoming type system enhancements:

### Phase 1: Distinct Boolean Type

- Boolean type tracking separate from integers
- Boolean operators: `&&`, `||`, `!`
- Comparison operators: `==`, `!=`, `<`, `>`, `<=`, `>=`

### Phase 2: String Support

- String variables
- String concatenation
- String operations (length, substring, etc.)

### Phase 3: Collections

- Arrays: `int[] numbers;`
- Maps: `map<string, int> data;`
- Iteration and access

### Phase 4: Advanced Types

- Floating-point numbers
- Custom structs/classes
- Generics and templates

## Examples

### Working Today

```ez
env native;

// Integer arithmetic
int a = 10;
int b = 20;
int sum = a + b;
int product = a * b;

// Boolean literals as integers
int yes = true;   // 1
int no = false;   // 0

// Print with literals
print("Sum:", sum);
print("Product:", product);
```

### Coming Soon

```ez
env native;

// Boolean type (future)
bool isValid = true;
bool result = (x > 5) && isValid;

// String variables (future)
string name = "Alice";
string greeting = "Hello, " + name;

// Arrays (future)
int[] numbers = [1, 2, 3, 4, 5];
int first = numbers[0];

// Maps (future)
map<string, int> ages = {"Alice": 30, "Bob": 25};
int aliceAge = ages["Alice"];
```

## Related Topics

- [Expressions](Expressions) - How to use types in expressions
- [Functions](Functions) - Function parameter types
- [Variables](Variables) - Variable declarations (if exists)
- [Grammar Reference](Grammar-Reference) - Formal type syntax

---

**See Also:** [Expressions](Expressions) | [Functions](Functions) | [Grammar Reference](Grammar-Reference)
