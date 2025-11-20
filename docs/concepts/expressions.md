# Expressions

Form:
```
primary (OPERATOR primary)*
```
Primary options: identifiers, literals, function calls (`print`/`printf`), friend calls, nested expression.

Supported operators in interpreter: `+ - * /`
Rejected with diagnostic: `== != > < >= <= && || !` (present in grammar, not yet evaluated).

Error cases:
- Division by zero
- Unknown identifier
- Unsupported operator

Roadmap:
- Boolean operator evaluation
- Operator precedence beyond current linear form
