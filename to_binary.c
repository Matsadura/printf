#include "main.h"

/**
 * print_binary - prints int as a bianry string
 *
 * @n:  given number as unsigned int
 *
 *Return: number of char to print
 */
int print_binary(unsigned int n)
{
	int i = 0, j = 0, c = 0;
	char *binary;
	char tmp;
	unsigned int m;

	if (n == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	for (m = n; m; c++)
		m /= 2;
	binary = malloc(sizeof(char) * c);
	if (binary == NULL)
		return (0);
	for(i = 0; i < c; i++)
	{
		binary[i] = (n % 2) + '0';
		n /= 2;
	}
	while (j < i)
	{
		tmp = binary[j];
		binary[j] = binary[i];
		binary[i] = tmp;
		j++;
		i--;
	}
	for (i = 0; i < c + 1; i++)
	{
		write(1, &binary[i], 1);
	}
	free(binary);
	return (c);

}
