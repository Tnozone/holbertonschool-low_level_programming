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
int i = 0;

while (s[i] != '\0')
{
if (s[i] == c)
{
return (s);
}
i++;
}
if (*s == c)
{
return (s);
}
return (0);
}
