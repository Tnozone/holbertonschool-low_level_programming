#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * description - prints last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int e=(n % 10);

srand(time(0));
n = rand() - RAND_MAX / 2;
if (e > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, e);
}
else if (e == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, e);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, e);
}
return (0);
}
