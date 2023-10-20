# _printf

This project is about creating a simplified version of the `printf` function in C. The `_printf` function is a custom implementation of the C programming language's `printf` function, which is part of the standard library. The function is variadic, meaning it accepts a variable number of arguments.

## Authorized functions and macros

The following functions and macros are used in this project:

* `write` (man 2 write)
* `malloc` (man 3 malloc)
* `free` (man 3 free)
* `va_start` (man 3 va_start)
* `va_end` (man 3 va_end)
* `va_copy` (man 3 va_copy)
* `va_arg` (man 3 va_arg)

## Compilation

The code is compiled this way:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Usage

The `_printf` function can be used similarly to the `printf` function. It takes a format string and a variable number of arguments, and writes the output to stdout (the standard output stream).

Here is a basic usage example:

```c
#include "main.h"

int main(void)
{
    _printf("Hello, world!\n");
    return (0);
}
```

## Format Specifiers

The `_printf` function supports the following format specifiers:

* `%c`: Character
* `%s`: String of characters
* `%d` or `%i`: Signed decimal integer
* `%b`: Unsigned binary
* `%u`: Unsigned decimal integer
* `%o`: Unsigned octal
* `%x`: Unsigned hexadecimal integer (lowercase)
* `%X`: Unsigned hexadecimal integer (uppercase)
* `%S`: Custom conversion specifier, prints the string. Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
* `%p`: Pointer address
* `%r`: Custom conversion specifier, prints the reversed string
* `%R`: Custom conversion specifier, prints the Rot13'ed string

## Authors

This project is a collaboration between : 
Oumaima NAANAA & Zidane ZAOUI

## More Projects
[Simple Shell](https://github.com/Matsadura/simple_shell)

[ALX Time Saver](https://github.com/Matsadura/ALX_Time_Saver)
