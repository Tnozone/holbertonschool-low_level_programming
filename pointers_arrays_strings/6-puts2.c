#include "main.h"
/**
 * puts2 - Entry
 * description - prints every other line
 * @str: contains char
 * Return: void
 */

void puts2(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str += 2;
}
_putchar('\n');
}