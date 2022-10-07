#include"main.h"
/**
 * print_square - Entry point
 * description - draws a square
 * @size: integer for square
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
int s, h;

if (size > 0)
{
for (s = 0; s < size; s++)
{
for (s = 0; s < size; s++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
