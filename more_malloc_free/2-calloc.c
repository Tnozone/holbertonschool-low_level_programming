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

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ar = malloc(size * nmemb);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ar[i] = 0;
	return (ar);
}
