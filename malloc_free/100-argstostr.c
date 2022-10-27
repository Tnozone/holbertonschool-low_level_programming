#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments
 * @ac: arguments
 * @av: two-dimentional
 *
 * Return: Nothing.
 */

char *argstostr(int ac, char **av)
{
	int i, j;
	char *ar;

	if (ac == 0 || av == NULL)
		return (NULL);

	ar = (char**)malloc(sizeof(char) * ac);

	if (ar == NULL)
		return (NULL);

}
