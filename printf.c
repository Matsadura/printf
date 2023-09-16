#include "main.h"

/**
 * _printf - prints everything
 *
 * @format: first string
 * Return: the length of the printed content
 */

int _printf(const char *format, ...)
{
	int i, j, num = 0, len = 0;
	va_list type;

	data spec[] = {
		{'s', _str},
		{'c', _char},
		{'%', _mod},
	};

	va_start(type, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (format[i] == '%' && format[i + 1] != '\0')
			{
				if (format[i + 1] == spec[j].s)
				{
					len = spec[j].f(type);
					i += 2;
					num += len;
				}
			}
		}
		write(1, &format[i], 1);
		num++;
	}
	va_end(type);
	return (num);
}
