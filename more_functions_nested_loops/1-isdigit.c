#include"main.h"
/**
 * _isdigit - Entry point
 * description - checks if uppercase
 * @c: integer for number
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
c = c % 10;
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
