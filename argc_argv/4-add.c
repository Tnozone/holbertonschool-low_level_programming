#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that prints the number of arguments
 * @argc: int of argument
 * @argv: Pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i, j, sum = 0;

for (i = 1; i < argc; i++)
{
for (j = 0; argv[1][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
