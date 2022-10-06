#include"main.h"
/**
 * jack_bauer - Entry point
 * description - prints minutes of a day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h1, m1;

for (h1 = 0; h1 < 24; h1++)
{
for (m1 = 0; m1 < 60; m1++)
{
_putchar((h1 / 10) + '0');
_putchar((h1 % 10) + '0');
_putchar(':');
_putchar((m1 / 10) + '0');
_putchar((m1 % 10) + '0');
_putchar('\n');
}
}
}
