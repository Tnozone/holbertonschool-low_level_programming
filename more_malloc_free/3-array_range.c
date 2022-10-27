#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creactes array of integers
 * @min: min integer
 * @max: max integer
 *
 * Return: ar or null
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j;

	if (min > max)
		return (NULL);
	
	i = max - min + 1;
	ar = malloc(sizeof(int) * i);

	if (ar == NULL)
		return (NULL);

	for (j = 0; j < i; min++)
	{
		ar[j] = min;
		j++;
	}

	return (ar);
}
