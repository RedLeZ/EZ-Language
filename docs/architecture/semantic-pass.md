# Semantic Pass

Purpose: enforce access and modifier rules beyond syntax.

Checks implemented:
- Private method invocation from top-level -> error
- Access modifier on top-level variable -> error
- Unsupported `protected` -> diagnostic

Future checks:
- Type consistency
- Argument arity vs declarations
- Duplicate class member names
