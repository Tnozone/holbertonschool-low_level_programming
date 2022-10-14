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
unsigned int c, match, l = 0;

while (*s)
{
for (l = 0; accept[l]; l++)
{
If (*s == accept[l])
{
c++;
match = 1;
}
}
if (!match)
{
return (c);
}
match = 0;
s++;
} 
return (c);
}
