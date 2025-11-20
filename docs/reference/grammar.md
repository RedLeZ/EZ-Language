# Grammar Summary

See full file: `grammar/EZLanguage.g4`.

Key Non-Terminals:
- `program` -> statements & declarations
- `statement` -> env, include, friend, friendFunctionCall, expressionStatement, variableDeclaration, controlFlow, foreach
- `expression` -> primary (operator primary)*
- `primaryExpression` -> IDENTIFIER | literal | functionCall | friendFunctionCall | '(' expression ')'

Literals:
- STRING: `"..."`
- NUMBER: digits (floats not interpreted yet)
- BOOLEAN: `true` / `false`

Friend syntax:
```
friend <sourceStem> : <language> as <alias>;
```

Access modifiers: `public`, `private`, `protected` (protected not enforced yet).

Skipped tokens: whitespace, `//` line comments, `/* */` block comments.
