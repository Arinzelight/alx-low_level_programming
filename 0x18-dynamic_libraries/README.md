0x18. C - Dynamic libraries

# Dynamic Library - Project README

## Learning Objectives

At the end of this project, you will have gained knowledge on the following topics:

### General

1. **Dynamic Libraries:**
   - Understand what a dynamic library is.
   - How dynamic libraries work.
   - How to create a dynamic library.
   - How to use a dynamic library.

2. **LD_LIBRARY_PATH:**
   - What is the environment variable `$LD_LIBRARY_PATH`.
   - How to use `$LD_LIBRARY_PATH`.

3. **Static vs. Shared Libraries:**
   - Understand the differences between static and shared libraries.

4. **Basic Tools:**
   - Usage of basic command-line tools:
     - `nm`: Display symbol tables.
     - `ldd`: Print shared library dependencies.
     - `ldconfig`: Configure dynamic linker run-time bindings.

## Requirements

### C

- **Editors:** You can use any of the following editors: vi, vim, emacs.

- **Compilation:** All your C files will be compiled on Ubuntu 20.04 LTS using `gcc`, with the following options:
  - `-Wall`: Enable all compiler's warning messages.
  - `-Werror`: Treat warnings as errors.
  - `-Wextra`: Enable additional warning messages.
  - `-pedantic`: Issue warnings for non-standard code.
  - `-std=gnu89`: Use the GNU dialect of ISO C90 standard.

- **File Structure:**
  - All your C files should end with a new line.
  - A `README.md` file at the root of the project folder is mandatory.

- **Coding Style:**
  - Follow the Betty style guide for your code.
  - Code style will be checked using `betty-style.pl` and `betty-doc.pl`.

- **Global Variables:**
  - You are not allowed to use global variables.

- **Function Limit:**
  - No more than 5 functions per file.

- **Standard Library:**
  - You are not allowed to use standard library functions like `printf`, `puts`, etc., except for `_putchar`.

- **Header File:**
  - Prototypes of all functions and the `_putchar` function should be included in your header file named `main.h`.
  - Don't forget to push your header file to the repository.

### Bash

- **Editors:** You can use any of the following editors: vi, vim, emacs.

- **Testing Environment:** All your scripts will be tested on Ubuntu 20.04 LTS.

- **File Structure:**
  - All your script files should end with a new line.

- **Shebang Line:** The first line of all your script files should be exactly `#!/bin/bash`.

- **README:** Provide a `README.md` file at the root of the project folder that describes what each script is doing.

- **Execution Permission:** All your script files must be executable.

