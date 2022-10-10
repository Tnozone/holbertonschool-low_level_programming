#include"main.h"
/**
 * puts_half - Entry point
 * description - prints half of a string
 * @str: pointer to string
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
int l = 0;
int ln;
int a;

while (str[l] != '\0')
{
l++;
}
if (l % 2 == 0)
{
ln = (l / 2);
while (str[ln] != '\0')
{
_putchar(str[ln]);
ln++;
}
_putchar('\n');
}

else if (l % 2 != 0)
{
a = ((l / 2) + 1);
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
}
