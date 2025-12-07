# EZ-Language Configuration

EZ-Language uses configuration files to specify toolchain settings, allowing you to control which Python interpreter, C/C++ compilers, and build options are used for friend modules.

## Configuration Files

Configuration is loaded in this order (later overrides earlier):

1. **User-level config:** `~/.ezconfig` (optional)
   - Sets defaults for all your EZ projects
2. **Project-level config:** `<project>/.ezconfig` (optional)
   - Overrides user config for this specific project
3. **Environment variables:** (highest priority)
   - `PYTHON`: Python executable path
   - `PY_CFLAGS`: Python compile flags
   - `PY_LDFLAGS`: Python linker flags

## Configuration Format

`.ezconfig` uses a simple key-value format with sections:

```toml
[python]
# Python interpreter to use (default: python3)
executable = "python3"
# Can specify full path:
# executable = "/usr/local/bin/python3.11"
# executable = "/Users/you/.pyenv/versions/3.12.0/bin/python3"

[c]
# C compiler (default: clang)
compiler = "clang"
# C standard (default: c11)
standard = "c11"
# Extra compiler flags (optional)
flags = "-O2 -Wall"

[cpp]
# C++ compiler (default: clang++)
compiler = "clang++"
# C++ standard (default: c++17)
standard = "c++17"
# Extra compiler flags (optional)
flags = "-O2 -Wall"

[build]
# Output directory for compiled friend modules (default: .ezbuild)
output_dir = ".ezbuild"
# Verbose build output (default: false)
verbose = false
```

## Common Use Cases

### Using a specific Python version

**Project `.ezconfig`:**
```toml
[python]
executable = "/usr/local/bin/python3.11"
```

Or use pyenv:
```toml
[python]
executable = "/Users/you/.pyenv/versions/3.11.5/bin/python3"
```

Or simply activate the desired Python before running ez_main:
```bash
pyenv shell 3.11.5
./build/ez_main your_project.ez --build --run
```

### Using GCC instead of Clang

```toml
[c]
compiler = "gcc"

[cpp]
compiler = "g++"
```

### Custom build directory

```toml
[build]
output_dir = "build/friends"
```

### Different C++ standard

```toml
[cpp]
standard = "c++20"
```

## Precedence Rules

1. **Environment variables** always win (highest priority)
2. **Project `.ezconfig`** overrides user config
3. **User `~/.ezconfig`** provides fallback defaults
4. **Built-in defaults** are used if nothing is configured

Example precedence for Python:
1. `PYTHON` env var (if set)
2. `[python] executable` in project `.ezconfig` (if exists)
3. `[python] executable` in `~/.ezconfig` (if exists)
4. Default: `python3`

## Checking Active Configuration

To see what configuration is being used, enable verbose mode and inspect the build commands:

```bash
./build/ez_main your_project.ez --plan
```

The output will show the exact compiler commands, including resolved Python paths and flags.

## Examples

See `.ezconfig.example` in the repository root for a complete annotated example.

## Future Extensions

Planned configuration options:
- `[rust]`, `[mojo]`, `[wasm]` sections for additional languages
- `[nix]` section for Nix environment integration
- `[package]` section for dependency manifests
- Version constraints and lock files
