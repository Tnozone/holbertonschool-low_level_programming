#include"main.h"
/**
 * jack_bauer - Entry point
 * description - prints minutes of a day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h1 = 0;
int h2;
int m1;
int m2;

while (h1 <= 2)
{
if (h1 == 2 && h2 == 4)
{
break;
}
for (h2 = 0; h2 < 10;)
{
for (m1 = 0; m1 < 6;)
{
for (m2 = 0; m2 < 10;)
{
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
m2++;
}
m1++;
}
h2++;
}
h1++;
}
}
