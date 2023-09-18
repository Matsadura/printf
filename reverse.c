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
	int i, j = 0;
	char *s2;
	int len = 0;

	if (s == NULL)
		return (write(1, "(null)", 6));
	for (i = 0; s[i];)
		i++;

	s2 = malloc(sizeof(char) * i);
	while (i + 1)
	{
		s2[j] = s[i];
		len += write(1, &s2[j], 1);
		j++;
		i--;

	}
	free(s2);
	return (len - 1);



}
