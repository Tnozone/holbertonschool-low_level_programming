#include"main.h"
/**
 * print_numbers - Entry point
 * description - prints numbers 1 - 9
 * Return: Always 0 (Success)
 */

void print_numbers(void)
{
int n;

for (n = 0; n <= 9; n++)
{
_putchar(n + '0');
}
_putchar('\n');
}
