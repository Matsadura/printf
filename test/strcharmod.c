#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf a simple sentence.\n");
	printf("Character:[%c]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	printf("String:[%s]\n", "I am a string !");
	_printf("String:[%s]\n", "I am a string !");
	printf("Unknown:[%r]\n");
	_printf("Unknown:[%r]\n");
	printf("Percent:[%%]\n");
	_printf("Percent:[%%]\n");

	return (0);
}
