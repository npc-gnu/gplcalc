![gplcalc logo](./logo.png)

# gplcalc

**gplcalc** is a terminal-based calculator application written in C++. It offers a command-line interface (CLI) for performing common mathematical operations.

## Features

- Basic arithmetic operations: `+`, `-`, `*`, `/`
- Square root calculation
- Exponentiation (power)
- Hypotenuse calculation (for right triangles)

> **Note:** Looking for the Turkish version? [Click here](https://github.com/npc-gnu/gplcalc-tr)

---

## Installation

### 1. Clone the Repository

```bash
git clone https://github.com/npc-gnu/gplcalc.git && cd gplcalc
```

### 2. Run the Installer Script

```bash
chmod +x installer && ./install
```

### Alternatively: Compile It Yourself

If you enjoy compiling things manually, you can use:

```bash
g++ -o gplcalc gplcalc.cpp
```

Then manually copy it to `/usr/local/bin` or run the installer script afterward.

---

## Notes

- The installer script requires **root privileges** because it copies `gplcalc` to `/usr/local/bin`, a directory owned by root.
- This software uses the `cmath` and `iostream` C++ standard libraries.
- Fully written in C++ using:
  - `vim` ,
  - `kate`,
  - `g++` ,
  - Arch GNU/Linux and
  - `kitty` 

---

## License

This project is licensed under the [GNU Affero General Public License v3 (AGPLv3)](https://www.gnu.org/licenses/agpl-3.0.html).
