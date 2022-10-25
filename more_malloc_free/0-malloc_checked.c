#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: unsigned int
 *
 * Return: 0 or 98
 */

void *malloc_checked(unsigned int b)
{
void *var;
var = malloc(b);

if (var == NULL)
{
exit(98);
}
return (var);
}
