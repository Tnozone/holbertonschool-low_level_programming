#include"main.h"
/**
 * _strspn - Entry point
 * description - returns number of bytes from one string
 * @s: string
 * @accept: string
 * Return: pointer or NULL
 */

unsigned int _strspn(char *s, char *accept)
{
int x, y;
int l = 0;

for (x = 0; s[x] != '\0'; x++)
{
if (s[x] == ' ')
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[x] == accept[y])
{
l++;
}
}
}
else
{
return (l);
}
}
return (l);
}
