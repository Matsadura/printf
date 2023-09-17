#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * struct format - The format
 * @s: the specifier
 * @f: pointer to the specifier's function
 */

typedef struct format
{
	char s;
	int (*f)(va_list type);
} data;


int _char(va_list type);
int _str(va_list type);
int _mod(va_list type);
int _printf(const char *format, ...);
int print_number(int n);
int print_number_helper(unsigned int i);
int print_binary(unsigned int n);



#endif
