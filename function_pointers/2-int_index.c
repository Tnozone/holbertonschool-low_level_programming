#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: function pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned long int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i];
		if (cmp != 0)
			return (cmp(array[i]);
	}	
}
