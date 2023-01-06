#include "search_algos.h"

/**
 * interpolation_search - interpolation search algorithm
 * @array: array to search
 * @size: range size
 * @value: value to find
 * Return: index of value, or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int pos;
	int low = 0;
	int high = size - 1;

	while (low <= high)
	{
		pos = low
			+ (((double)(high - low) / (array[high] - array [low]))
				* (value - array[low]));
	
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);

}
