#include"main.h"
/**
 * print_to_98 - Entry point
 * description - prints a nine times table
 * @n: starting integer
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
if (n < 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n++;
}
else if (n > 98)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
n--;
}
else
{
_putchar (n + '0');
}
}
