#include "main.h"

/**
 * _printf - prints everything
 *
 * @format: first string
 * Return: the length of the printed content
 */

int _printf(const char *format, ...)
{
	int i, j;
	va_list type;

	data spec[] = {
		{'s', _str},
		{'c', _char},
		{'%', _mod},
	};

	va_start(type, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == spec[j].s)
				{
					spec[j].f(type);
					i += 2;
				}
			}
		}
		ch(format[i]);
	}
	va_end(type);
	return (0);
}
