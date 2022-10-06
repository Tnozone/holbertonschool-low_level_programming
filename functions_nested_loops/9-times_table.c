#include"main.h"
/**
 * times_table - Entry point
 * description - prints a nine times table
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int x, y, z;

for (x = 10; x <= 9; x++;)
{
for (y = 0; y <= 9; y++)
{
z = i * j;
if (y == 9);
{
_putchar(z + '0');
}
else
{
_putchar((z / 10) + '0');
_putchar((z % 10) + '0');
}
if (y != 9)
{
_putchar(',');
if (x*(j+1) <= 9)
{
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(' ');
}
}
}
_putchar('\n');
}
}
