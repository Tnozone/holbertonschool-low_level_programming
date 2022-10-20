#include <stdio.h>
/**
 * main - program that multiplies two arguments
 * @argc: int of argument
 * @argv: Pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
int prod = 0;

if (argc < 2)
{
prinf("Error\n");
return (1);
}
else
{
prod = argv[1] * argv[2];
printf("%d\n", prod);
}
return (0);
}
