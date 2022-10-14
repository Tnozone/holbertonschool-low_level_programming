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
int i, j;
int r = 0;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
r++;
}
}
}
else
{
return (r);
}
}
return (r);
}
