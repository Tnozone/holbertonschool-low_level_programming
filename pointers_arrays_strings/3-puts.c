#include"main.h"
/**
 * _puts - Entry point
 * description - prints a string
 * @str: pointer to string
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
