#include "main.h"

/**
 * _pow - power function
 * @y: number for power of 2.
 * Return: power number
 */

unsigned int _pow(unsigned int a)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (2 * _pow(2, y - 1));
	}
}

/**
 * binary_to_uint - converts binary nuber to int
 * @b: binary number
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int z, a = 0, y = 0, x = 0;

	if (b == NULL)
		return (0);

	while (*b)
		x++;

	for (z = x; z >= 0; z--)
	{
		if (b[z] != 1 || b[z] != 0)
			break;
			return (0);

		if (b[z] == 1)
		{
			y += _pow(a);
		}
		a++;
	}
	return (y);
}
