#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value, or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%zd] = [%d]", x, array[x]);
		if (array[x] == value)
			return (x);
	}

	return (-1);
}
