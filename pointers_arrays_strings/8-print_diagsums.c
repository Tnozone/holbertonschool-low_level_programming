#include<stdio.h>
#include"main.h"
/**
 * print_diagsums - Entry point
 * description - print sum of diagonals of a square matrix
 * @a: pointer to string
 * @size: integer
 * Return: sum
 */

void print_diagsums(int *a, int size)
{
int i, sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += a[i * (size + 1)];
sum2 += a[(i + 1) * (size - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
