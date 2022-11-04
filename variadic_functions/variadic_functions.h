#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_
#include<stdio.h>
#include<stdlib.h>

/**
 * struct unit - structure format
 * @c: char
 * @i: int
 * @f: float
 * @s: string
 * longer description
 */

typedef struct unit
{
	char c;
	int i;
	float f;
	char *s;
} unit;

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
