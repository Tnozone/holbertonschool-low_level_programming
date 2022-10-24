#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to allocated space
 * @str: array pointer
 *
 * Return: Nothing.
 */

char *_strdup(char *str)
{
  char *array;
  int i, x;

  if (str == NULL)
    {
      return (NULL);
    }
  for (i = 0; str[i] != '\0'; i++)
    {
      i++;
    }
  array = malloc((sizeof(char) * i) + 1);
  
  if (array == NULL)
    {
      return (NULL);
    }
  for (x = 0; x < i; x++)
    {
      array[x] = str[x];
    }
  return (array);
}
