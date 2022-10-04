#include"main.h"
/**
 * print_last_digit - Entry point
 * description - print last digit
 * @n: integer with digits
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
if (n > 0)
{
n = n % 10;
_putchar(n + '0');
return (n);
}
else
{
n = (-1) * n;
n = n % 10;
_putchar(n + '0');
return (n);
}
}
