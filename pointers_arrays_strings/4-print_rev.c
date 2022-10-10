#include"main.h"
/**
 * print_rev - Entry point
 * description - prints a string
 * @s: pointer to string
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
int end, x;

while (s[end] != '\0')
{
end++;
}
for (x = end; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
