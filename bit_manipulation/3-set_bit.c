#include "main.h"

/**
 * set_bit - sets bit to 1 at index
 * @n: bit
 * @index: position of bit
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int mask; 
	unsigned int x;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	mask = 1 << index;
	x = (n & ~mask) | (1 << index);
	return (1);
}
