#include"main.h"
/**
 * _islower - Entry point
 * description - print alphabet
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
char c;

 _puchar(c);
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
