#include "main.h"

/**
 * _nonprintable - prints string with with non
 *	printable characters as hex ascii value
 * @str: the string
 * Return: the length
 */

int _nonprintable(char *str)
{
	int len = 0, i;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] < 16)
			{
				write(1, "\\x0", 3);
				len += 3;
				len += _print_number(str[i], 'X', 0);
			}
			else if ((str[i] >= 16 && str[i] < 32) || str[i] >= 127)
			{
				write(1, "\\x", 2);
				len += 2;
				len += _print_number(str[i], 'X', 0);
			}
			else
			{
				write(1, &str[i], 1);
				len++;
			}
		}
	}

	return (len);
}
