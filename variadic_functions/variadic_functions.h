#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

/**
 * struct printer - structure format
 * @p: read value
 * @f: function pointer
 * longer description
 */

typedef struct printer
{
	char *p;
	void (*f)(va_list arg);
} printer;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
