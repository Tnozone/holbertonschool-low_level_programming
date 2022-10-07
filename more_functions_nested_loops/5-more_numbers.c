#include"main.h"
/**
 * more_numbers - Entry point
 * description - prints numbers 0 - 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
int a, n;
a = 0;

while (a < 10)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
{
_putchar((n / 10) + '0');
goto jump;
}
else
jump :
{
_putchar((n % 10) + '0');
}
}
_putchar('\n');
a++;
}
}
