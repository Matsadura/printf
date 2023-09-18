#include "main.h"

/**
 * reverse_print - prints reversed string
 *
 * @s: the string to reverse
 *
 * Return: reversed string
 */

int reverse_print(char *s)
{
	int i = 0;
	int len = 0;

	if (s == NULL)
		return (write(1, "(null)", 6));
	for (; s[i];)
		i++;

	i--;
	while (i >= 0)
	{
		len += write(1, &s[i], 1);
		i--;

	}
	return (len);



}
