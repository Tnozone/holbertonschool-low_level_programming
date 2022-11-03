#include"3-calc.h"

/**
 * main  - entry
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: r
 */

int main(int argc, char *argv[])
{
	int r;
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

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
	if ((op_s == '/' || op_s == '%') && num2 == 0)
	{
		printf("ERROR");
		exit (100);
	}

	r = *get_op_func(*s)(num1, num2);
	printf("%d\n", r);
	return (0);
}
