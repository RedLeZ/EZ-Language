# EZ-Language Wiki

Welcome to the **EZ-Language** wiki! EZ-Language (EZ) is designed to make programming easy, fast, and universally accessible.

## 🚀 Quick Navigation

### Getting Started
- [Quickstart](Quickstart) - Get up and running in 5 minutes
- [Feature Tour](Feature-Tour) - Explore EZ Language features

### Core Concepts
- [Environment](Environment) - Environment declarations and Nix integration
- [Friend Modules](Friend-Modules) - Integrate native code (C/C++/Python)
- [Types](Types) - Type system overview
- [Expressions](Expressions) - Expression syntax and evaluation
- [Functions](Functions) - Function declarations and calls
- [Visibility](Visibility) - Visibility and access control

### Guides
- [Embedding Native Code](Embedding-Native-Code) - Deep dive into native integration
- [Printing and Debugging](Printing-and-Debugging) - Output and debugging techniques

### Reference
- [CLI Reference](CLI-Reference) - Command-line interface documentation
- [Grammar Reference](Grammar-Reference) - Language grammar specification
- [Configuration](Configuration) - Configuration file format
- [Diagnostics](Diagnostics) - Error messages and diagnostics
- [Nix Environments](Nix-Environments) - Nix integration details

### Architecture
- [Architecture Overview](Architecture-Overview) - System design and pipeline
- [Semantic Pass](Semantic-Pass) - Semantic analysis details
- [Code Generation](Code-Generation) - C code emission
- [Design Rationale](Design-Rationale) - Design decisions explained

### Contributing
- [Setup Guide](Setup-Guide) - Development environment setup
- [Style Guide](Style-Guide) - Coding style and conventions
- [Roadmap](Roadmap) - Project roadmap and milestones

### Additional Resources
- [Glossary](Glossary) - Terms and definitions
- [Changelog](Changelog) - Version history

## 🎯 Philosophy

- **Easy:** Simple syntax and setup for rapid development
- **Universal:** Multi-language support lets you mix and match code across ecosystems
- **Reproducible:** Nix-powered environments guarantee consistent builds
- **Community-first:** Open, extensible, and driven by contributors

## 📦 Current Status (MVP)

**Implemented:**
- `env native;` environment declaration
- `friend <stem>: <c|cpp|python> as <alias>;` module linking
- Integer variables & arithmetic `+ - * /`
- Boolean literals (`true`/`false` → 1/0)
- Built-in `print` / `printf`
- Quiet vs verbose output modes
- Semantic checks (private access, invalid modifiers)
- C code emission (`--emit-c`, `--build-native`, `--run-native`)

**Coming Soon:**
- Function execution and returns
- Boolean operators
- Rich types (string, array, map)
- Extended multi-language support

## 🔗 External Links

- [GitHub Repository](https://github.com/RedLeZ/EZ-Language)
- [Main README](https://github.com/RedLeZ/EZ-Language/blob/main/README.md)
- [Documentation Source](https://github.com/RedLeZ/EZ-Language/tree/main/docs)
