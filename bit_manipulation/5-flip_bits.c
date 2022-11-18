#include "main.h"

/**
 * flip_bits - returns number of bits flipped
 * @n: first bit number
 * @m: second bit number
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m, bits = 0;

	while (flip > 0)
	{
		bits += (flip & 1);
		flip >>= 1;
	}
	return (bits);
}
