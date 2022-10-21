#include"main.h"
/**
 * len - Entry point
 * description - returns length of string
 * @s: string
 * Return: Sucess
 */

int len(char *s)
{

  if (*s == '\0')
    {
      return (0);
    }
  return (1 + len(s + 1));
}

/**
 * is_palindrome - Entry point
 * description - checks if string is a palindrome
 * @s: string
 * Return: Sucess
 */

int is_palindrome(char *s)
{
  
  if (len == 0)
    {
      return (1);
    }
  else if (*s < len / 2)
    {
      if (*s == s[len - 1])
	{
	  s++;
	  len--;
	}
      else
	{
	  return (0);
	}
      return (1);
    }
}
