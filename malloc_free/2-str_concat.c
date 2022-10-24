#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: secod string
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
  int x, y, g = 0, h = 0;
  char *ar;

  for(x = 0; s1[x] != '\0'; x++)
    {
      if (s1 == NULL)
	{
	  x = 0;
	  break;
	}
      else
	{
      x++;
	}
    }
  for(y = 0; s2[y] != '\0'; y++)
    {
      if (s2 == NULL)
	{
	  y = 0;
	  break;
	}
      else
	{
      y++;
	}
    }
ar = malloc(sizeof(char) * (x + y) +1);

if (ar == NULL)
    {
      return (NULL);
    }
 else
   {
     return (ar); 
   }
}
