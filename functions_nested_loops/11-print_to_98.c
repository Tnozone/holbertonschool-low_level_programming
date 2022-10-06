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
for (n < 98; n++;)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else if (n > 98)
{
for (n > 98; n--;)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar (98 + '0');
}
}
