#include"main.h"
/**
 * *string_toupper - Entry point
 * description - prints a string
 * @s: pointer to string
 * Return: string
 */

char *string_toupper(char *s)
{
int i = 0;

while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
i++;
}

return (s);
}
