#include"main.h"
/**
 * _islower - Entry point
 * description - checks if lowercase
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

_putchar(c);
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
