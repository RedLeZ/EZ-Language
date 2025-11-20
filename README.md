# EZ-Language

EZ-Language (EZ) is designed to make programming easy, fast, and universally accessible. Whether you're a beginner or a seasoned developer, EZ empowers you to build complex projects with minimal friction, supporting reproducible environments and multi-language integration out-of-the-box.

---

## Philosophy

- **Easy:** Simple syntax and setup for rapid development.
- **Universal:** Multi-language support lets you mix and match code across ecosystems.
- **Reproducible:** Nix-powered environments guarantee consistent builds and development experiences.
- **Community-first:** Open, extensible, and driven by contributors.

---

## Core Features

### 1. Environment Declaration & Nix Integration

EZ projects start with a single declaration, such as:
```
doing env-web;
doing mojo-ai;
doing game-py;
```
Each environment automatically configures your dependencies and tooling using dedicated Nix expressions. This ensures every project is reproducible, isolated, and easy to share.

- Auto-generate or import Nix files for environments.
- Extend environments by customizing generated Nix configs.
- Discover and use community-contributed templates.

### 2. Multi-Language Support

EZ lets you include and glue code from different languages in one project. Planned strategies include:

- Importing modules from Python, Mojo, C++, and more.
- Compiling native code (C++, Mojo, Rust) to machine code/assembly and linking via a glue layer.
- For scripting languages, leveraging compilers (e.g., Nuitka for Python) or Wasm targets for integration.
- Automatic interface generation and unified data exchange.

### 3. Easy Tooling & Editor Plugins

- EZ CLI for project management, running, and building (`ez init`, `ez run`, `ez build`).
- Editor-agnostic workflows, with dedicated plugins for VSCode and others.
- Syntax highlighting and code intelligence for multi-language code blocks.

### 4. Community Ecosystem

- Registry of environments, templates, and packages.
- Open contributions and package sharing via Git and a dedicated website.
- Transparent, community-driven package management.

## Minimal Native MVP

A tiny C++ driver (`ez_main`) is included so you can experiment with a stripped down version of EZ right now:

- Exactly one environment declaration is supported: `doing native;`.
- `friend <module> : <lang> as <alias>;` accepts `lang` equal to `c` or `cpp` and resolves `<module>` relative to the `.ez` file.
	- If `<module>` has no extension, `.c`/`.cpp` is assumed based on `<lang>`.
	- If `<module>` ends with `.o` or `.a`, no compile is performed; the file is linked into a `.dylib`.
	- If `<module>` ends with `.dylib`, it is used directly.
- `ez_main` will either print the commands (`--plan`) or execute them (`--build`) to emit artifacts under `.ezbuild/` alongside the source.

### Python Friends (MVP)

- You can now `friend <module>.py : python as <alias>;` and call `alias.func(a, b)` from EZ.
- The driver generates a tiny C shim that embeds CPython, imports your module, and exports C functions matching the used calls with `int` args/return.
- Requirements: a working Python 3 on PATH (for `python3-config`).

If `python3-config` is missing or your Python is a framework build on macOS, you can set flags manually:

```
export PY_CFLAGS="-I$(python3 -c 'import sysconfig; print(sysconfig.get_config_var("INCLUDEPY") or "")')"
export PY_LDFLAGS="$(python3 -c 'import sysconfig; print(" ".join(filter(None,[sysconfig.get_config_var(k) or "" for k in ("LDFLAGS","LIBS","SYSLIBS","LINKFORSHARED")])))')"
```

Then re-run `--build`.

Try the example:

```
./build/ez_main examples/py_demo.ez --build --run
```

This will build `.ezbuild/libpy.dylib` and print the result of `py.add(3, 5)`.

### Try it out

```
cmake -S . -B build
cmake --build build
./build/ez_main examples/demo.ez --plan            # inspect the commands
./build/ez_main examples/demo.ez --build           # compile native friends
./build/ez_main examples/demo.ez --run             # interpret int declarations/expressions
./build/ez_main examples/demo.ez --build --run     # compile friends and interpret in one go
```

The repository ships with a minimal example (`examples/demo.ez`) and a matching C friend (`examples/native_math.c`) to get started. For interpreter-only tests, try `examples/math.ez` which exercises simple `int` declarations and arithmetic. Link the resulting objects with your host application or runtime as needed.

> **Limitations (for now):** no automatic code generation yet, friend module names cannot include path separators, and only native C/C++ shims are supported.

### Native Codegen (C backend)

You can now compile EZ (int-only subset) to C, build a native binary, and run it:

```
# Emit C to .ezbuild/<name>.c
./build/ez_main examples/math.ez --emit-c

# Build native binary at .ezbuild/<name>
./build/ez_main examples/math.ez --build-native

# Generate, build and run the native binary
./build/ez_main examples/math.ez --run-native
```

Notes:
- Supports `int` variables and `+ - * /` expressions; expression statements print their value.
- Friend calls are not yet supported in codegen; use the interpreter (`--run`) for those.

---

## Roadmap & Milestones

**Milestone 1: Core Language and Tooling MVP**
- EZ syntax parser and core CLI.
- Basic environment declaration support.

**Milestone 2: Nix Environment Integration**
- Mapping declarations to Nix expressions.
- Automated Nix file generation/import.

**Milestone 3: Multi-language Foundation**
- Code inclusion system.
- Glue/interface layer for C++ ↔ Python/Mojo.

**Milestone 4: EZ Compiler/Translator**
- EZ-to-native compilation (C/Assembly backend).
- Unified error and reporting system.

**Milestone 5: Package & Environment Registry**
- Community registry for environments and templates.
- CLI integration for sharing/discovering packages.

**Milestone 6: Editor Plugins and UX**
- VSCode plugin release.
- Enhanced documentation and onboarding.

**Milestone 7: Advanced Multi-language & Community Features**
- Support for more languages (Rust, JS, WASM, etc.).
- Advanced glue automation and ecosystem growth.

---

## Get Involved

- Try out the latest milestone features.
- Contribute environments, templates, or code.
- Join discussions and help shape the future of EZ-Language.

---

## License

EZ-Language is open source and welcomes community contributions. See [LICENSE](LICENSE) for details.
