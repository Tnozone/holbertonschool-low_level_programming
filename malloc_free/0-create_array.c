#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - creates an array of chars
 * @c: specified char
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
int *var = malloc(sizeof(int) + sizeof(char));
  var[0] = size;
  var[1] = c;
  
  if (size == 0)
    {
      return (0);
    }
  while (1)
    {
      return (var);
    }
  return (0);
}
