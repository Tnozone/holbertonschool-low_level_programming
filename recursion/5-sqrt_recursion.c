#include"main.h"
/**
 * _sqrt_recursion - Entry point
 * description - returns square root
 * @n: integer
 * @i: square number
 * Return: Sucess
 */

int root(int n, int i)
{
if (n / i == i && (n % i == 0))
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (root(i + 1, n));
}

int _sqrt_recursion(int n)
{
  
if (n == 0)
{
return (0);
}
return (root(1, n));
}
