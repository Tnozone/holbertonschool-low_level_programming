

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates string s1 and n on s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: Nothing.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
 unsigned x, y, i, s;
  char *ar;

  if (s1 == NULL)
    {
      s1 = "";
    }
  for (x = 0; s1[x] != '\0'; x++)
    {
      ;
    }
  if (s2 == NULL)
    {
      s2 = "";
    }
  for (y = 0; s2[y] != '\0'; y++)
    {
      ;
    }
  if (n > y)
    {
      n = y;
    }
  
  s = x + n + 1;
  ar = malloc(sizeof(char) * s);

  if (ar == NULL)
    {
      return (NULL);
    }
  else
    {
      for (i = 0; i < x; i++)
	{
	  ar[i] = s1[i];
	}
      for (i = 0; i <= n; i++)
	{
	  ar[i + x] = s2[i];
	}
      ar[x + n] = '\0';
    }
  return (ar);
}
