#include"main.h"
/**
 * _puts_recursion - Entry point
 * description - compares two strings
 * @s: string
 * Return: Sucess
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(++s);
}
else
{
_putchar('\n');
}
}
