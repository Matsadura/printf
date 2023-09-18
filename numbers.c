#include "main.h"

/**
 * _print_number - prints the number and the sign
 * @n: the number
 * @spec: the specifer
 * @sign: the sign
 * Return: the length
 */

int _print_number(unsigned long int n, char spec, int sign)
{
	unsigned long int m;
	int count = 0, base_c = 0, index;
	char *specifier = "dib", *num_str;
	int base[] = {10, 10, 2};

	if (n == 0)
		return (write(1, "0", 1));

	while (spec != specifier[base_c])
		base_c++;

	for (m = n; m != 0; count++)
	{
		m = m / base[base_c];
	}

	num_str = malloc(count + sign);
	if (num_str == NULL)
		return (0);

	for (index = count + sign - 1; index >= 0; index--)
	{
		m = n % base[base_c];
		num_str[index] = '0' + m;
		n = n / base[base_c];
	}

	if (sign == 1)
		num_str[0] = '-';

	_str_num(num_str);

	free(num_str);

	return (count + sign);
}

/**
 * _number - detects the sign
 * @n: the number
 * @spec: the specifier
 * Return: the lenght
 */

int _number(int n, char spec)
{
	int sign = 0;

	if (n < 0)
	{
		sign = 1;
		n = n * (-1);
	}
	return (_print_number(n, spec, sign));
}


