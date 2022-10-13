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
int  x = 0, y = 0, i = 0;

while (a[i] != '\0')
{
i++;
}
i--;

while (y < n)
{
x = a[i];
a[i] = a[y];
a[y] = x;
y++;
i--;
}
}
