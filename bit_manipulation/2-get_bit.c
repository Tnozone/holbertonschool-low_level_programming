#include "main.h"

/**
 * get_bit - return bit at index
 * @n: bit number
 * @index: position of bit
 * Return: bit or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
