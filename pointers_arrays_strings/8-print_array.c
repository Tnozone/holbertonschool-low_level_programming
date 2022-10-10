#include<stdio.h>
#include"main.h"
/**
 * print_array - Entry point
 * description - prints elements of an array
 * @a: pointer to string
 * @n: integer
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
int i = 0;

while (i < n)
{
printf("%d", a[i]);
if (i < (n - 1))
printf(", ");
i++;
}
printf("\n");
}
