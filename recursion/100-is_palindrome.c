#include"main.h"
/**
 * len - Entry point
 * description - palindrome check
 * @str: character to check with end
 * @end: character to check with start
 * Return: Sucess
 */

int len(char *str, char *end)
{

  if (str == end)
    {
      return (1);
    }
  if (*str == *end && str + 1 == end)
    {
      return (1);
    }
  if (*str == *end)
    {
      return (len(str + 1, end - 1));
    }
  return (0);
    }

/**
 * end - return a pointer at the end of a string
 * @s: string
 * Return: pointer to end of string
 */

char *end(char *s)
{
  if (*s)
    {
    return (end(s + 1));
    }
  return (s);
}
  
/**
 * is_palindrome - Entry point
 * description - checks if string is a palindrome
 * @s: string
 * Return: Sucess
 */

int is_palindrome(char *s)
{
  return (len(s, end(s) - 1));
}
