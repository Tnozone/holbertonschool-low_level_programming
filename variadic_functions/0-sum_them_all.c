#include<stdarg.h>
#include"variadic_functions.h"

/**
 * sum_them_all - adds all parameters
 * @n: first parameter
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int r;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		r += va_arg(arg, int);

	va_end(arg);
	return (r);
}
