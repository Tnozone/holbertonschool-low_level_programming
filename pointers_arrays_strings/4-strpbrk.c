#include"main.h"
/**
 * *_strpbrk - Entry point
 * description - searchers string for a set of bytes
 * @s: pointer to string
 * @accept: string
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept)
{
int x;

while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
{
return (s);
}
}
s++;
}
return (0);
}
