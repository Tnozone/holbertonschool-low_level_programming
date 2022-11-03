#include"3-calc.h"

/**
 * main  - entry
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: r
 */

char main(int *argc, char argv[])
{
	int r;
	num1 = atoi(argv[1]);
	nume 2 = atoi(argv[2]);

	if (argc != 4)
	{
		printf("ERROR");
		exit (98);
	}
	if (s == NULL)
	{
		printf("ERROR");
		exit (99);
	}
	if ((operator == '/' || operator == %) && num2 == 0)
	{
		prinf("ERROR");
		exit (100);
	}

	r = get_op_func(*s)(num1, num2);
	return (r);
}
