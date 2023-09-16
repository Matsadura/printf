#include "main.h"

/**
 * string - prints a string
 * @s: the string
 */

void string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		ch(s[i]);
	}
}
