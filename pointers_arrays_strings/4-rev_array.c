#include"main.h"
/**
 * reverse_array - Entry point
 * description - reverses an array
 * @a: string
 * @n: integer
 * Return: void
 */

void reverse_array(int *a, int n)
{
int x, i;

for (i = 0; i < n; i++)
{
n--;
x = a[i];
a[i] = a[n];
a[n] = x;
}
}
