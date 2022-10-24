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
int i, j;
int **var;

if (width <= 0 || height <= 0)
{
return (NULL);
}
var = (int **)malloc(height * sizeof(int *));

if (var == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
var[i] = (int *)malloc(width * sizeof(int));

if (var[i] == NULL)
{
for (j = 0; j < height; j++)
{
free(var[j]);
}
free(var);
return (NULL);
}

for (j = 0; j < width; j++)
{
var[i][j] = 0;
}
}
return (var);
}
