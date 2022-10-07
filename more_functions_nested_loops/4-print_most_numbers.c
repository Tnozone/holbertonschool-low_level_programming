#include"main.h"
/**
 * print_numbers - Entry point
 * description - prints numbers 1 - 9 except 2 and 4
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
if (n == 2 || n == 4)
{
continue;
}
_putchar(n + '0');
}
_putchar('\n');
}
