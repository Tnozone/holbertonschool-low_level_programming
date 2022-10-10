#include"main.h"
/**
 * _strlen - Entry point
 * description - make a pointer point to 98
 * @s: character pointer
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
int len = 0;

while (*s[len] != '\0')
{
len++;
}
return (len);
}
