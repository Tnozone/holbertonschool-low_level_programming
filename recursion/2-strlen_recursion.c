#include"main.h"
/**
 * _strlen_recursion - Entry point
 * description - returns length of string
 * @s: string
 * Return: Sucess
 */

int _strlen_recursion(char *s)
{
  int l = 0;
  
  if (*s != '\0')
    {
      l++;
      _strlen_recursion(s + 1);
    }
  return (l);
}
