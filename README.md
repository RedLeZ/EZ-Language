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
