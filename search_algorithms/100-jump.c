#include "search_algos.h"

/**
 * min - function
 * @a: first value
 * @b: second value
 * Return: a or b
 */

int min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - jump search algorithm
 * @array: array to search
 * @size: array size
 * @value: value to find
 * Return: index of value, or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int s = size;
	int step = sqrt(s);
	int prev = 0;

	if (array == NULL)
		return (-1);

	while (array[min(step, s) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(s);
		if (prev >= s)
			return (-1);
	}
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	printf("Value found between indexes [%d] and [%d]\n", prev, step);

	while (array[prev] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev == min(step, s))
			return (-1);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
