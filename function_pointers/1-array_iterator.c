#include "function_pointers.h"
/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	action(array);
}

