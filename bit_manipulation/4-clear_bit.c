#include "main.h"

/**
 * clear_bit - sets bit to 0 at index
 * @n: bit
 * @index: position of bit
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
