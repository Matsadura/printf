#include "main.h"

/**
 * print_binary - prints int as a bianry number
 *
 * @n:  given number as unsigned int
 *
 *Return: number of char to print
 */
int print_binary(unsigned int n)
{
	unsigned int i = 0, j = 0, len = 0;
	char *binary;
	char tmp;
	unsigned int m;

	m = sizeof(n) * 8;
	if (n == 0)
	{
		write(1, "0", 1);
		len++;
	}
	binary = (char *)malloc(m + 1);
	while (n > 0)
	{
		binary[i] = (n % 2) + '0';
		n /= 2;
		i++;
	}
	while (j < i)
	{
		tmp = binary[j];
		binary[j] = binary[i];
		binary[i] = tmp;
		j++;
		i--;
	}
	for (i = 0; i < m - 1; i++)
	{
		write(1, &binary[i], 1);
		len++;
	}
	free(binary);
	return (len);

}
