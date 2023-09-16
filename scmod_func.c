#include "main.h"

/**
 * _str - prints a string
 * @type: the argument to print
 */

void _str(va_list type)
{
	string(va_arg(type, char*));
}

/**
 * _char - prints a char
 * @type: the argument
 */

void _char(va_list type)
{
	ch(va_arg(type, char));
}

/**
 * _mod - prints modulo sign
 * @type: the argument to print
 */

void _mod(va_list type)
{
	ch(va_arg(type, char));
}
