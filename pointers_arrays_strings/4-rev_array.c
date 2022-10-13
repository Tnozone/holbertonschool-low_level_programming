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
int  x = 0, y = 0;
  
while (y < n)
{
x = a[n];
a[n] = a[y];
a[y] = x;
y++;
n--;
}
}
