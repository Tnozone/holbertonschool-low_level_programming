#include"3-calc.h"

/**
 * main  - entry
 *
 *
 * Return: 
 */

main()
{
	atoi(a);
	atoi(b);
	if (argc > 4)
	{
		printf("ERROR");
		exit (98);
	}
	if (operator != '+' && operator != '-' &&
		operator != '*' && operator != '/' && operator != '%')
	{
		printf("ERROR");
		exit (99);
	}
	if ((operator == '/' || operator == %) && b == 0)
	{
		prinf("ERROR");
		exit (100);
	}
}
