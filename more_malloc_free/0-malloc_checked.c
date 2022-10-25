#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: unsigned int
 *
 * Return: Nothing.
 */

void *malloc_checked(unsigned int b)
{
  int *var;
  var = malloc(sizeof(b));

  if (var != NULL)
    {
  return (var);
    }
  else
    {
      return (98);
    }
    }
