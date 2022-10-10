#include"main.h"
/**
 * _strlen - Entry point
 * description - make a pointer point to 98
 * @s: character pointer
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
while (*s != '\0')
{
s++;
}
return(*s);
}
