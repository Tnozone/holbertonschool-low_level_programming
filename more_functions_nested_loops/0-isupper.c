#include"main.h"
/**
 * _isupper - Entry point
 * description - checks if uppercase
 * @c: integer for alphabet
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{

if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
