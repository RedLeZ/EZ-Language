# Design Rationale

Guiding choices:
- Start with a tiny, learnable core (env + int + friend + print).
- Use ANTLR for fast iteration on grammar.
- Friend modules give immediate native extension power without full FFI complexity.
- Verbose mode opt-in keeps default output minimal.
- Semantic checks separated from parsing to evolve rules independently.

Trade-offs:
- Limited operator support to reduce early interpreter complexity.
- Booleans as ints for quick arithmetic integration.
- Class functions parsed but not executed yet—lays groundwork for future features.

Future Evolution:
- Rich type system (string, map, arrays)
- Proper boolean logic evaluation
- Function execution + return semantics
- Module/package system
