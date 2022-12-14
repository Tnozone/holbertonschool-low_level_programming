#include "search_algos.h"

/**
 * binary_search - binary search algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value, or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int min, max, med, x;

	if (array == NULL)
		return (-1);

	min = 0;
	max = size - 1;

	while (min <= max)
	{
		med = (min + max) / 2;

		printf("Searching in array: ");
		for (x = min; x <= max; x++)
		{
			printf("%d", array[x]);
			if (x != max)
				printf(", ");
			else
				printf("\n");
		}

		if (array[med] == value)
			return (med);
		else if (value > array[med])
			min = med + 1;
		else
			max = med - 1;
	}
	return (-1);
}
