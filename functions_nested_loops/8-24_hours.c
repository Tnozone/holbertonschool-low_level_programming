#include"main.h"
/**
 * jack_bauer - Entry point
 * description - prints minutes of a day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h = 0;
int m = 0;

while (h < 24)
{
while (m < 60)
{
_putchar(h);
_putchar(':');
_putchar(m);
_putchar(\n);
m++;
}
h++;
}
}
