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
  int i;
  array = malloc(sizeof(char) * i);
  
  if (str == NULL)
    {
      return (NULL);
    }

  if (array == NULL)
    {
      return (NULL);
    }
  for (i = 0; str[i] != '\0'; i++)
    {
      array[i] = str[i];
    }
  return (array);
}
