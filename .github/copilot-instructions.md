# Copilot / AI Agent Instructions

Purpose: Help an AI coding agent be immediately productive in this repository (collection of small C programs and exercises).

Quick summary
- This repo is a set of small, mostly standalone C programs organized at the top level and in folders like `tema4/`, `tema5/`, and `super-trunfo-c/`.
- Most files are single-file exercises (one `main` per `.c`). `super-trunfo-c/` contains a small multi-file program.

Where to start
- Run or open a single file: inspect the `.c` file (examples: [tema5/teste.c](tema5/teste.c), [jokenpo.c](jokenpo.c)).
- For multi-file work, look into `super-trunfo-c/` — its `super-trunfo.c` is the main multi-file example.

Build & run (project-specific)
- The workspace uses the GCC toolchain on Windows. The provided VS Code build task uses `C:\w64devkit\bin\gcc.exe`.
- Example single-file compile command (used by the task):

  C:\w64devkit\bin\gcc.exe -fdiagnostics-color=always -g tema5\teste.c -o tema5\teste.exe

- Example multi-file compile (for `super-trunfo-c`):

  C:\w64devkit\bin\gcc.exe -fdiagnostics-color=always -g super-trunfo-c\*.c -o super-trunfo-c\super-trunfo.exe

- VS Code task label: "C/C++: gcc.exe build active file" — you can run it to compile the active `.c` file.

Conventions & patterns (specific)
- Files are typically Portuguese-named and represent independent exercises. Avoid making sweeping changes across many exercise files.
- Prefer minimal, localized changes: each `.c` is usually a small program with `main()` and direct `stdin`/`stdout` use.
- No build system (Make/CMake) — compilation is ad-hoc via `gcc`. If you add multi-file changes, update the example compile command above or add a task.

What an AI should do when editing
- Verify the file still compiles with the example `gcc` command above (use `-g` and `-fdiagnostics-color=always`).
- Keep changes small and focused; update the directory's README (if present) when adding or changing behavior in a folder (e.g., `super-trunfo-c/README.md`).
- If adding new helper files, place them next to the related exercise and document the compile command in that folder's README.

Code style / language notes
- Plain C (procedural) with simple I/O. Expect Portuguese identifiers and comments.
- Avoid introducing new external dependencies or libraries — keep solutions portable to MSYS2/mingw-w64 GCC on Windows.

Debugging & testing
- Compile with `-g` and run the produced `.exe` from the integrated terminal to reproduce issues.
- There are no automated tests in the repo; manual run / sample input is the norm.

Integration points
- There are no external services or packages to install. Everything is local C source code.

Examples to reference in edits
- Single-file: [tema5/teste.c](tema5/teste.c)
- Multi-file example: [super-trunfo-c/super-trunfo.c](super-trunfo-c/super-trunfo.c)

When to ask the user
- If a change affects more than one exercise file, ask whether to refactor shared code into a new helper file and whether to update build instructions.
- If you cannot compile using the provided GCC path, ask for the preferred toolchain/OS to target.

If anything here is incomplete or you want more project-level policies (formatting, testing harness, CI), tell me which folders or workflows to expand.
