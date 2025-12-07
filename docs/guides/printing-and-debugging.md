# Printing & Debugging

Use built-ins:
```
print("Hello", 42, true);
printf("Value:", 5);
```
- Strings: quotes stripped
- Numbers and booleans rendered directly (true/false strings or numeric when evaluated in expressions)

Verbose mode adds evaluation lines:
```
./build/ez_main file.ez --run --verbose
```
Shows `=> value` for expressions and friend calls.

Quiet mode output: only print/printf content.

Future additions:
- `log()` levels
- Source line tracing
