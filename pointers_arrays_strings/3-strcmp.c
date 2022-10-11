#include"main.h"
/**
 * _strcmp - Entry point
 * description - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: y
 */

int _strcmp(char *s1, char *s2)
{
int x = 0;

while (s1[x] = s2[x] && s1[x] != '\0')
{
x++;
}
if (s1[x] != s2[x])
{
return (s1[x] - s2[x])
}
else
{
return (0)
}
}
