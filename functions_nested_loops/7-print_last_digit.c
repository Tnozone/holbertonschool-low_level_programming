#include"main.h"
/**
 * print_last_digit - Entry point
 * description - print last digit
 * @n1: integer with digits
 * Return: Always 0 (Success)
 */

int print_last_digit(int n1)
{
int n;
if (n1 > 0)
{
n = n1 % 10;
}
else
{
n = (-1) * (n1 % 10);
}
_putchar((n % 10) + '0');
return (n % 10);
}
