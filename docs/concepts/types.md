# Types

Currently implemented:
- `int` (32-bit assumed; arithmetic only)
- `boolean` (literals `true`/`false` coerced to 1/0 internally)
- `string` (only as literal tokens for printing; no variables of type yet)
- `float`, `void`, `map` tokens exist in grammar but not interpreted.

Interpreter limitations:
- Only `int` variables are allowed.
- Booleans only appear as literals or inside expressions; evaluation returns numeric 1/0.

Roadmap:
- Distinct boolean type tracking
- String variable support
- Map and arrays
