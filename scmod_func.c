#include "main.h"

/**
 * _str - prints a string
 * @type: the argument to print
 * Return: len
 */

int _str(va_list type)
{
	int len = 0;
	char *s = va_arg(type, char *);

	if (s != NULL)
	{
		len = _strlen(s);
		string(s);
	}
	return (len);

}

/**
 * _char - prints a char
 * @type: the argument
 */

int _char(va_list type)
{
	int len = 1;

	ch(va_arg(type, int));
	return (len);
}

/**
 * _mod - prints modulo sign
 * @type: the argument to print
 */

int _mod(__attribute__ ((unused)) va_list type)
{
	int len = 1;

	ch('%');
	return (len);
}
