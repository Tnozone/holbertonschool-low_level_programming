#include"main.h"
/**
 * _print_rev_recursion - Entry point
 * description - prints string in reverse
 * @s: string
 * Return: Sucess
 */

void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
