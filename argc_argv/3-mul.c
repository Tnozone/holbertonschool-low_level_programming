#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two arguments
 * @argc: int of argument
 * @argv: Pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
  int m, n, prod;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
m = atoi(argv[1]);
n = atoi(argv[2]);
prod = m * n;
printf("%d\n", prod);
}
return (0);
}
