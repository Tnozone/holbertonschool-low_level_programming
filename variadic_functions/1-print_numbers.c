#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list arg;

	if (separator == NULL)
		return;

	va_start(arg, separator);

	while(n > 0)
	{
		separator = va_arg(arg, const char *);
		x--;
	}

	while(separator != NULL)
	{
		printf("%s\n", *separator);
		separator = va_arg(arg, const char *);
	}

	va_end(arg);
	return;
}
