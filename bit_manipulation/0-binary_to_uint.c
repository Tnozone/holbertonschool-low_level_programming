#include "main.h"

/**
 * _pow - power function
 * @y: number for power of 2.
 * Return: power number
 */

int _pow(int y)
{
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (2 * pow(2, y - 1));
	}
}

/**
 * binary_to_uint - converts binary nuber to int
 * @b: binary number
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0, y = 0, x = 0;

	if (b == NULL)
		return (0);

	while (*b)
		x++;

	for (; x >= 0, x--)
	{
		if (b[x] != 1 || b[x] != 0)
			return (0);

		if (b[x] == 1)
		{
			y += _pow(a);
		}
		a++;
	}
	return (y);
}
