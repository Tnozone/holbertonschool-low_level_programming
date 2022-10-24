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
  str = malloc(sizeof(char) * );
  
  if (str == NULL)
    {
      return (NULL);
    }
  free(str);
}
