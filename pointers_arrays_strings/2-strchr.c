#include"main.h"
/**
 * *_strchr - Entry point
 * description - searchers string for char c
 * @s: pointer to string
 * @c: character
 * Return: pointer or NULL
 */

char *_strchr(char *s, char c)
{

while (*s)
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
