#include"main.h"
/**
 * _strncmp - Entry point
 * description - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: y
 */

int _strcmp(char *s1, char *s2)
{
int y, z = 0, len = 0;

while (s1[len] != '\0')
{
len++;
}

while (s2[z] != '\0')
{
z++;
}

y = z - len;
return (y);
}
