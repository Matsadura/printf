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


int _strlen(char *s);
void _char(va_list type);
void _str(va_list type);
void _mod(va_list type);
int ch(char c);
void string(char *s);
void _printf(const char * const format, ...);



#endif
