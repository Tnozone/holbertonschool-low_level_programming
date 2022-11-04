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

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(arg, char) == NULL)
			printf("(nil)");
		else
			printf("%s", va_arg(arg, char));
		if (separator != NULL && i != (n - 1)
				printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
