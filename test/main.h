#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct format - The format
 * @s: the specifier
 * @f: pointer to the specifier's function
 */

typedef struct format
{
	char s;
	void (*f)(va_list type);
} data;


int _char(va_list type);
int _str(va_list type);
int _mod(va_list type);
int _printf(const char *format, ...);



#endif
