#include "main.h"
/**
 * fd - Entry
 * @i: number to square
 * @n: root
 * Return: (fd)
 */

int fd(int i, int n)
{
if (i * i == n)
{
return (i);
}
if (i * i > n)
{
return (-1);
}
return (fd(i + 1, n));
}

/**
 * _sqrt_recursion - Write a function that returns the natural square root
 * @n: root
 * Return: (fd)
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
return (fd(1, n));
}
