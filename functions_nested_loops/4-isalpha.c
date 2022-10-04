#include"main.h"
/**
 * _isalpha - Entry point
 * description - checks if alphabet
 * @c: integer for alphabet
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
if (c >= 'a' || c >= 'A')
{
return (1);
}
else
{
return (0);
}
}
