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
char *var
  var = malloc((sizeof(c) * size) + 1);
 int i;
 
 for (i = 0; i < size; i++)
   {
   if (size == 0)
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
}
