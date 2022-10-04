#include"main.h"
/**
 * _abs - Entry point
 * description - checks if lowercase
 * Return: Always 0 (Success)
 */

int _abs(int n)
{
  if (n > 0)
    {
      return (n);
    }
  else
    {
      n = (-1) * n;
      return (n);
    }
  return (0);
}
