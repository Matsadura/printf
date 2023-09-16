#include "main.h"

/**
 * ch - prints a char
 * @c: the char
 * Return: the char
 */

int ch(char c)
{
	return (write(1, &c, 1));
}
