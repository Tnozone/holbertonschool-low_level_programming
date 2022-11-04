#include<stdarg.h>
#include"variadic_functions.h"

/**
 * print_char - print character
 * @arg: argument
 * Return: 0
 */

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - print int
 * @arg: argument
 * Return: 0
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print floating integer
 * @arg: argument
 * Return: 0
 */

void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - print string
 * @arg: argument
 * Return: 0
 */

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);
	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: the format
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	printer unit[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
		};

	va_list arg;
	int x = 0;
	int y = 0;
	char *var = "";

	va_start(arg, format);

	while (format && format[x] != '\0')
	{
		while (unit[y].p)
		{
			if (*unit[y].p == format[x])
			{
				printf("%s", var);
				unit[y].f(arg);
				var = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}

	va_end(arg);
	printf("\n");
}
