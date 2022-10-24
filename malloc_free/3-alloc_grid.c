#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to two-deimentional array
 * @width: integer
 * @height: integer
 *
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
  int *var;
  var = malloc(sizeof(int) * (width * height);

  if (width <= 0 || height <= 0)
    {
      return (NULL);
    }
  else if (var == NULL)
    {
      return (NULL);
    }
  else
    {
      return (var);
    }
}
