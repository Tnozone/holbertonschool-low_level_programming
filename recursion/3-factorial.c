#include"main.h"
/**
 * factorial - Entry point
 * description - returns factorial
 * @n: number
 * Return: Sucess
 */

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1)
}
else
{
return (factorial(n * (n - 1)));
}
}
