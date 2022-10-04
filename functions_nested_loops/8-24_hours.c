#include"main.h"
/**
 * jack_bauer - Entry point
 * description - prints minutes of a day
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
int h1 = 0;
int h2 = 0;
int m1 = 0;
int m2 = 0;

while (h1 <= 2)
{
  if (h1 == 2 && h2 == 4)
    {
      break;
    }
  while (h2 < 10)
    {
  while (m1 < 6)
    {
while (m2 < 10)
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
