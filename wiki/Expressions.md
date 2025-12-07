# Expressions

Expressions in EZ Language: syntax, operators, and evaluation rules.

## Expression Form

Expressions follow this basic structure:

```
primary (OPERATOR primary)*
```

Where a **primary** can be:
- Identifier (variable reference)
- Literal (number, boolean, string)
- Function call (`print`, `printf`)
- Friend call (`m.add(...)`)
- Nested expression with parentheses

## Supported Operators

### Arithmetic Operators

Currently supported and evaluated by the interpreter:

| Operator | Description | Example | Result |
|----------|-------------|---------|--------|
| `+` | Addition | `3 + 2` | `5` |
| `-` | Subtraction | `5 - 2` | `3` |
| `*` | Multiplication | `4 * 3` | `12` |
| `/` | Division | `10 / 2` | `5` |

**Precedence:** Standard mathematical precedence applies:
1. `*`, `/` (highest)
2. `+`, `-` (lowest)

```ez
env native;
int result = 1 + 2 * 3;  // result = 7 (not 9)
print("result:", result);
```

### Boolean and Comparison Operators (Not Yet Evaluated)

These operators exist in the grammar but are not yet evaluated by the interpreter:

| Operator | Description | Status |
|----------|-------------|--------|
| `==` | Equal to | Grammar only |
| `!=` | Not equal to | Grammar only |
| `>` | Greater than | Grammar only |
| `<` | Less than | Grammar only |
| `>=` | Greater than or equal | Grammar only |
| `<=` | Less than or equal | Grammar only |
| `&&` | Logical AND | Grammar only |
| `||` | Logical OR | Grammar only |
| `!` | Logical NOT | Grammar only |

**Using unsupported operators produces a diagnostic:**

```ez
int result = (5 > 3);  // Error: operator '>' not yet supported
```

## Primary Expressions

### Literals

#### Integer Literals

```ez
env native;
int x = 42;
int negative = -10;
```

#### Boolean Literals

```ez
env native;
int flag = true;   // Evaluates to 1
int other = false; // Evaluates to 0
```

#### String Literals

```ez
env native;
print("Hello, World!");  // String literals in print
```

**Note:** String variables are not yet supported. See [Types](Types).

### Variable References

```ez
env native;
int x = 10;
int y = x + 5;  // Reference variable x
print("y:", y);
```

### Function Calls

#### Built-in Functions

**print:**

```ez
env native;
print("Hello");
print("Value:", 42);
print("Sum:", 1 + 2);
```

**printf:**

```ez
env native;
int x = 100;
printf("Value: %d\n", x);
```

### Friend Function Calls

```ez
env native;
friend native_math: cpp as m;
int sum = m.add(3, 2);
print("sum:", sum);
```

Learn more: [Friend Modules](Friend-Modules)

### Parenthesized Expressions

Use parentheses to control evaluation order:

```ez
env native;
int a = (1 + 2) * 3;  // a = 9
int b = 1 + (2 * 3);  // b = 7
int c = 1 + 2 * 3;    // c = 7 (same as b)
```

## Complex Expressions

Combine multiple operators:

```ez
env native;
int x = 10;
int y = 20;
int z = (x + y) * 2 - 5;  // z = 55
print("z:", z);
```

## Expression Evaluation

### Order of Operations

1. **Parentheses** - Innermost first
2. **Multiplication and Division** - Left to right
3. **Addition and Subtraction** - Left to right

```ez
env native;
int result1 = 2 + 3 * 4;        // 14 (not 20)
int result2 = (2 + 3) * 4;      // 20
int result3 = 10 / 2 * 3;       // 15 (left to right)
int result4 = 10 - 5 + 2;       // 7 (left to right)
```

### Verbose Mode Evaluation

In verbose mode (`--verbose`), expression evaluation is shown with `=>`:

```bash
./build/ez_main program.ez --run --verbose
```

Output example:
```
=> evaluating: 1 + 2 * 3
=> result: 7
```

Learn more: [Printing and Debugging](Printing-and-Debugging)

## Error Cases

### Division by Zero

```ez
env native;
int x = 10 / 0;  // Runtime error: division by zero
```

### Unknown Identifier

```ez
env native;
int y = x + 5;  // Error: identifier 'x' not declared
```

### Unsupported Operator

```ez
env native;
int result = 5 > 3;  // Error: operator '>' not yet implemented
```

## Expression Contexts

Expressions can appear in various contexts:

### Variable Initialization

```ez
env native;
int x = 1 + 2 * 3;
```

### Function Arguments

```ez
env native;
print("result:", 5 + 10);
```

### Friend Function Arguments

```ez
env native;
friend native_math: cpp as m;
print("sum:", m.add(2 + 3, 4 * 2));
```

## Roadmap

Upcoming expression features:

### Boolean Operators

```ez
// Future support
bool result = (x > 5) && (y < 10);
bool flag = !isValid;
```

### Comparison Operators

```ez
// Future support
bool isGreater = x > y;
bool isEqual = a == b;
```

### String Operations

```ez
// Future support
string name = "Hello " + "World";
int length = name.length();
```

### Array Access

```ez
// Future support
int[] numbers = [1, 2, 3];
int first = numbers[0];
```

## Examples

### Basic Arithmetic

```ez
env native;
int a = 5;
int b = 3;
int sum = a + b;
int diff = a - b;
int product = a * b;
int quotient = a / b;

print("sum:", sum);
print("diff:", diff);
print("product:", product);
print("quotient:", quotient);
```

### Complex Calculation

```ez
env native;
int x = 10;
int y = 20;
int z = 30;

int result = (x + y) * z / 2 - 5;
print("result:", result);  // Output: result: 445
```

### With Friend Modules

```ez
env native;
friend native_math: cpp as m;

int a = 5;
int b = m.add(a, 10);
int c = m.add(b, a * 2);

print("final:", c);
```

## Related Topics

- [Types](Types) - Type system and literals
- [Friend Modules](Friend-Modules) - Calling native functions
- [Printing and Debugging](Printing-and-Debugging) - Verbose evaluation output
- [Grammar Reference](Grammar-Reference) - Formal expression syntax

---

**See Also:** [Types](Types) | [Functions](Functions) | [Grammar Reference](Grammar-Reference)
