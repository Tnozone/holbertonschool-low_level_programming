#include"main.h"
/**
 * _islower - Entry point
 * description - prints minutes of a day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h = 0;
int m = 0;

for (h < 24)
{
for (m < 60)
{
_putchar(h, ':', m);
m++;
}
h++;
}
}
