#include "search_algos.h"

/**
 * exponential_search - exponential search function
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: index of value, or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	int max, min, med, i = 1, s = size;
	while (i < s && array[i] <= value)
	{
		printf("Value checked array [%d] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	max = i / 2; 
	min = min(i ,size - 1);

	while (min <= max)
	{
		med = (min + max) / 2;
		printf("Value checked array [%d] = [%d]\n", med, array[med]); 
		if (array[med] == value)
			return (med);
		else if (value > array[med])
			min = med + 1;
		else
			max = med - 1;
	}
	return (-1);
}
