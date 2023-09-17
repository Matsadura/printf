#include "main.h"

void test(void);

/**
 * _printf - prints everything
 *
 * @format: first string
 * Return: the length of the printed content
 */

int _printf(const char *format, ...)
{
	int i, num = 0, len = 0;
	va_list type;

	va_start(type, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				switch (format[i + 1])
				{
					case 's':
						len = _str(type);
						i++;
						num += len;
						break;
					case 'c':
						len = _char(type);
						i++;
						num += len;
						break;
					case '%':
						len = _mod(type);
						i++;
						num += len;
						break;
					default:
						write(1, &format[i], 1);
						write(1, &format[i + 1], 1);
						i += 1;
						num += 2;
						break;
				}
			}
			else
			{
				write(1, &format[i], 1);
				num++;
				i++;
			}
		}
		else
		{
			write(1, &format[i], 1);
			num++;
		}
	}
	va_end(type);
	return (num);
}

/**
 * test - test
 */
void test(void)
{
}
