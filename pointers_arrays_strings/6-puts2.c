#include "main.h"
/**
 * puts2 - Entry
 * description - prints every other line
 * @str: contains char
 * Return: void
 */

void puts2(char *str)
{
int i, len = 0;

while (str[len] != '\0')
{
len++;
}

for (i = 0; i < len; i++)
{
_putchar(str[i]);
i += 1;
}
_putchar('\n');
}
