#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *st;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		st = va_arg(arg, char *);
		if (st == NULL)
			printf("(nil)");

		else
			printf("%s", st);

		if (separator != NULL && i != (n - 1))
				printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
