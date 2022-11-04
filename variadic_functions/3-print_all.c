#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_all - prints anything
 * @format: the format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	int inc = 0;
	va_list arg;

	va_start(arg, format);

	while (format[inc])
	{
		unit.[inc] = var_arg(arg, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", unit.[inc]);
		if (format[inc + 1])
			printf(", ");
		inc++;
	}

	va_end(arg);
	printf("\n");
}
