#include"main.h"
/**
 * times_table - Entry point
 * description - prints a nine times table
 * Return: Always 0 (Success)
 */

void times_table(void)
{
int x = 0;
int y;
int z = x * y;

while (x < 10)
{
for (y = 0; y <= 9; y++)
{
_putchar(z + '0');
if (y == 9)
{
break;
}
_putchar(',');
_putchar(' ');
}
_putchar('\n');
x++;
}
}
