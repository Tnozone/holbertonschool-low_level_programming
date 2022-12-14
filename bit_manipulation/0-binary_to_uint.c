#include "main.h"

/**
 * binary_to_uint - converts binary nuber to int
 * @b: binary number
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int y = 0;
	unsigned int mul = 1;

	if (b == NULL)
		return (0);

	for (x = 0; b[x]; x++)
		;
	x--;

	for (; x >= 0; x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		y += (b[x] - '0') * mul;
		mul *= 2;
	}
	return (y);
}
