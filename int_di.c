#include "main.h"

/**
 * print_number_length - prints an integers
 *
 * @i: the integer to be printed
 * Return: the length
 */
int print_number_length(unsigned int i)
{
	char num;
	int len = 0;

	if (i / 10)
		len += print_number_length(i / 10);
	num = i % 10 + '0';
	write(1, &num, 1);
	len++;

	return (len);
}

/**
 * print_number - prints an integers
 *
 * @n: the integer to be printed
 * Return: the length
 */

int print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		write(1, "-", 1);
		i = -n;
	} else
	{
		i = n;
	}

	return (print_number_length(i));
}
