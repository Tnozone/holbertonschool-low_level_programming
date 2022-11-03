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
	int num1;
	int num2;
	char *s;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = (argv[2]);

	if (s == NULL)
	{
		printf("ERROR\n");
		exit (99);
	}
	if ((*s == '/' || *s == '%') && num2 == 0)
	{
		printf("ERROR\n");
		exit (100);
	}

	r = get_op_func(s)(num1, num2);
	printf("%d\n", r);
	return (0);
}
