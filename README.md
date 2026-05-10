*This project has been created as part of the 42 curriculum by fjose-hi.*

# Description

A custom implementation of the standard C `printf()` function developed as part of the 42 curriculum.

`ft_printf` is a reimplementation of the standard C library function `printf()`. The goal of this project is to understand how variadic functions work in C, how formatted output is generated, and how low-level output handling can be implemented manually.

This project focuses on:

- Variadic arguments using `stdarg.h`
- Parsing format strings
- Managing formatted output
- Converting data types into strings
- Writing modular and reusable code
- Understanding low-level formatted I/O behavior

The final result is a custom static library that reproduces the behavior of the original `printf()` for a defined set of conversions.

---

# Features

## Supported Conversions

| Specifier | Description |
|---|---|
| `%c` | Prints a single character |
| `%s` | Prints a string |
| `%p` | Prints a pointer address in hexadecimal |
| `%d` | Prints a signed decimal integer |
| `%i` | Prints an integer |
| `%u` | Prints an unsigned decimal integer |
| `%x` | Prints a hexadecimal number in lowercase |
| `%X` | Prints a hexadecimal number in uppercase |
| `%%` | Prints a percent sign |

---

# Project Structure

```text
.
├── Makefile
├── ft_printf.h
├── ft_printf.c
├── ft_printf_utils.c
└── additional source files
```

---

# Algorithm & Data Structure Explanation

## Parsing Algorithm

The implementation uses a sequential parsing algorithm that iterates through the format string character by character.

The algorithm works as follows:

1. Read each character from the format string.
2. If the character is not `%`, print it directly.
3. If `%` is found:
   - Read the next character.
   - Determine the conversion type.
   - Call the appropriate conversion handler.
4. Continue until the end of the string.
5. Return the total number of printed characters.

This approach was chosen because:

- It closely mirrors how the original `printf()` behaves internally.
- It is efficient and easy to maintain.
- It avoids unnecessary memory allocation.
- It allows modular handling of each conversion type.

---

## Variadic Arguments

The project uses the `stdarg.h` library to manage an unknown number of function arguments.

Main macros used:

| Macro | Purpose |
|---|---|
| `va_start` | Initializes the argument list |
| `va_arg` | Retrieves the next argument |
| `va_end` | Cleans the argument list |

Using variadic functions is essential because `printf()` accepts a variable number of parameters depending on the format string.

---

## Data Structures

This project mainly relies on:

- Character arrays (`char *`)
- Integer counters
- Recursive number conversion functions
- The `va_list` structure from `stdarg.h`

No complex data structures were required because the project focuses primarily on parsing and formatted output generation.

The implementation prioritizes:

- Simplicity
- Efficiency
- Readability
- Modular design

---

# Instructions

## Clone the Repository

```bash
git clone https://github.com/felipehillebrand-ops/ft_printf.git
cd ft_printf
```

---

## Compilation

Compile the library:

```bash
make
```

This generates:

```bash
libftprintf.a
```

---

## Cleaning Object Files

Remove object files:

```bash
make clean
```

Remove object files and the library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

---

# Using the Library

Include the header in your project:

```c
#include "ft_printf.h"
```

Compile your program with the library:

```bash
cc main.c libftprintf.a
```

---

# Usage Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s!\n", "42");
    ft_printf("Number: %d\n", 42);
    ft_printf("Hexadecimal: %x\n", 255);
    return (0);
}
```

Expected output:

```text
Hello 42!
Number: 42
Hexadecimal: ff
```

---

# Technical Choices

This project follows the requirements defined by the 42 subject:

- Written entirely in C
- Compiled with the flags:

```bash
-Wall -Wextra -Werror
```

- No global variables
- Fully compliant with the 42 Norm
- Modular conversion handling
- Static library generation using `ar`

---

# Testing

The project can be tested using:

- `norminette`
- Custom test cases
- Community ft_printf testers

Example:

```bash
norminette
```

---

# Resources

## Documentation & References

- Linux Manual Pages (`man printf`)
- 42 Subject PDF for ft_printf

---

## AI Usage Disclosure

AI tools were used during this project for:

- Reviewing README structure and formatting
- Clarifying concepts related to variadic functions
- Improving documentation quality and wording
- Verifying explanations of formatted output behavior

All implementation, debugging, testing, and final validation of the code were completed manually.

---

# Learning Outcomes

Through this project, the following concepts were strengthened:

- Variadic functions in C
- Parsing algorithms
- Formatted output generation
- Hexadecimal conversion
- Low-level output handling
- Modular programming
- Static library creation
- Defensive programming

---

# License

This project was developed for educational purposes as part of the 42 curriculum.

---

# Author

Felipe José Hillebrand

GitHub: https://github.com/felipehillebrand-ops
