#include"main.h"
/**
 * swap_int - Entry point
 * description - make a pointer point to 98
 * @a: pointer 1
 * @b: pointer 2
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
