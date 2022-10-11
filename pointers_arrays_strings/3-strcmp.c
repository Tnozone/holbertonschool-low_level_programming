#include"main.h"
/**
 * _strcmp - Entry point
 * description - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: Sucess
 */

int _strcmp(char *s1, char *s2)
{
int x = 0;

while (*s1 != '\0' && *s2 != '\0')
{
if (*s1 != *s2)
{
x = 1;
break;
}
s1++;
s2++;
}

if (x == 0)
{
return (0);
}
else
{
return (s2 - s1);
}
}
