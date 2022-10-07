#include"main.h"
/**
 * print_line - Entry point
 * description - draws a line
 * @n: integer for line
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
int l;

if (n > 0)
{
for (; l < n; l++)
{
_putchar('_');
}
}
_putchar('\n');
}
