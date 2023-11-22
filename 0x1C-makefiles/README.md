# 0x1C. C - Makefiles

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

1. **What are make, Makefiles:**
   - `make` is a build automation tool used for compiling and building projects.
   - `Makefiles` are special files that contain rules and dependencies for building a program.

2. **When, why, and how to use Makefiles:**
   - **When:** Makefiles are used when there are multiple source files in a project.
   - **Why:** They automate the build process, ensuring only necessary files are recompiled.
   - **How:** By defining rules, dependencies, and commands in a Makefile.

3. **What are rules and how to set and use them:**
   - **Rules:** Specify how to build a target, with dependencies and commands.
   - **Setting Rules:**
     ```make
     target: dependencies
         commands
     ```

4. **What are explicit and implicit rules:**
   - **Explicit Rules:** Define how to build a specific target.
   - **Implicit Rules:** Default rules used when no explicit rule is found.

5. **What are the most common / useful rules:**
   - `all`: Builds the entire project.
   - `clean`: Deletes all files created during the build process.
   - `install` and `uninstall`: Used to install and uninstall the program.
   - `test`: Runs test cases for the program.

6. **What are variables and how to set and use them:**
   - **Variables:** Allow the definition of values for reuse.
   - **Setting Variables:**
     ```make
     VAR_NAME = value
     ```
     Referenced using `$(VAR_NAME)`.

## Requirements

### General

- **Allowed editors:** vi, vim, emacs
- **OS:** Ubuntu 20.04 LTS
- **Version of gcc:** 9.3.0
- **Version of make:** GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## Usage

1. Clone the repository.
2. Navigate to the project directory.
3. Open a terminal and run `make` to build the project.
4. Run `make clean` to remove compiled files.



