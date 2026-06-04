*This project has been created as part of the 42 curriculum by vaugusto.*

## Description
	This project is a implementation of an clone of the printf function. It cover the scopes of:
	- %c Prints a single character.
	- %s Prints a string (as defined by the common C convention).
	- %p The void * pointer argument has to be printed in
	hexadecimal format.
	- %d Prints a decimal (base 10) number.
	- %i Prints an integer in base 10.
	- %u Prints an unsigned decimal (base 10) number.
	- %x Prints a number in hexadecimal (base 16) lowercase format.
	- %X Prints a number in hexadecimal (base 16) uppercase format.
	- %% Prints a percent sign.

## Instructions
	
To compile the library:

```bash
make
```

This will generate:

```text
ft_printf.a
```

---

## Available Makefile Rules

### Compile the library

```bash
make
```

### Remove object files

```bash
make clean
```

### Remove object files and library

```bash
make fclean
```

### Recompile everything

```bash
make re
```

---

# Usage Example

Include the header in your project:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
gcc main.c ft_printf.a
```

---
## Resources
va_args:
	https://stackoverflow.com/questions/4339412/how-to-use-va-args-inside-a-c-function-instead-of-macro
## AI Usage

AI tools were used for:
- Understanding functions and concepts
- Clarifying functions, types and behaviors of C
- Improving documentation structure and readability

All code implementation, debugging, testing, and final decisions were completed manually.

---

# Author

vaugusto

Project developed at 42 School.