#include"main.h"
/**
 * _pow_recursion - Entry point
 * description - returns x to the power of y
 * @x: integer
 * @y: integer
 * Return: Sucess
 */

int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
else
{
return (x ** y);
}
}
