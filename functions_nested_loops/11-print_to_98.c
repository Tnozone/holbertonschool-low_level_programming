#include"main.h"
/**
 * print_to_98 - Entry point
 * description - prints a nine times table
 * @n: starting integer
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{
if (n < 98)
{
printf("&d, ", n++);
}
else if (n > 98)
{
printf("%d, ",n--);
}
else
{
printf("98");
}
}
