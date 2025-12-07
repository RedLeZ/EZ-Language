# Environment

Every EZ source file must declare an execution environment as its first line.

## Syntax

```ez
env native;
```

## Supported Environments

Currently, only `native` is supported. This declares a standard native execution environment.

## Environment Declaration Rules

1. **Required:** Every EZ program must start with an environment declaration
2. **First Line:** Must be the very first statement in the file
3. **Unique:** Only `native` is currently recognized

## Diagnostics

### Missing Environment Declaration

If your program doesn't start with an environment declaration:

```
Error: missing environment declaration
```

**Fix:** Add `env native;` as the first line.

### Unsupported Environment

If you specify an environment other than `native`:

```ez
env vm;  // Not yet supported
```

```
Error: only the 'native' environment is supported
```

**Fix:** Use `env native;` instead.

## Future Environments

The environment system is designed to be extensible. Future environments may include:

- **`vm`** - Virtual machine execution
- **`wasm`** - WebAssembly target
- **`sandbox`** - Sandboxed execution environment
- **Custom environments** - User-defined execution contexts

## Nix Integration

When Nix is available, EZ can automatically manage reproducible environments:

```bash
# Prepare environment (downloads dependencies)
./build/ez_main program.ez --prepare

# Run with environment auto-activation
./build/ez_main program.ez --run

# Skip environment activation
./build/ez_main program.ez --run --no-env

# Show environment details
./build/ez_main program.ez --env-info
```

The environment declaration influences how Nix environments are configured and activated.

### Environment Files

EZ can generate and use `.ezconfig` files that map to Nix expressions:

- **Base environment:** Defined by `env native;`
- **Project customizations:** Layered override model
- **Reproducible builds:** Guaranteed consistent dependency versions

Learn more: [Nix Environments](Nix-Environments) and [Configuration](Configuration)

## Example Programs

### Minimal Program

```ez
env native;
print("Hello, World!");
```

### With Friend Modules

```ez
env native;
friend native_math: cpp as m;
print("Result:", m.add(2, 3));
```

### With Variables

```ez
env native;
int x = 42;
int y = x * 2;
print("y =", y);
```

## Related

- [Configuration](Configuration) - Configuration file format
- [Nix Environments](Nix-Environments) - Detailed Nix integration
- [Quickstart](Quickstart) - Get started with EZ

---

**See Also:** [Types](Types) | [Friend Modules](Friend-Modules) | [Architecture Overview](Architecture-Overview)
