#include "main.h"

/**
 * _str - prints a string
 * @type: the argument to print
 * Return: len
 */

int _str(va_list type)
{
    int i;
    char *s = va_arg(type, char *);

    for (i = 0; s[i] != '\0'; i++)
    {
        write(1, &s[i], 1);
    }
    return (i);
}

/**
 * _char - prints a char
 * @type: the argument
 * Return: len
 */

int _char(va_list type)
{
    int len = 1;
    char c = va_arg(type, int);

    write(1, &c, 1);
    return (len);
}

/**
 * _mod - prints modulo sign
 * @type: the argument to print
 * Return: len
 */

int _mod(__attribute__ ((unused)) va_list type)
{
    int len = 1;
    char c = '%';

    write(1, &c, 1);
    return (len);
}
