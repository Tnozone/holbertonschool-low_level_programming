#include"main.h"
/**
 * print_diagonal - Entry point
 * description - draws a diagonal line
 * @n: integer for line
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
int l, s;

if (n > 0)
{
for (l = 0; l < n; l++)       
{
for (s = 0; s < l; s++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
_putchar('\n');
}
