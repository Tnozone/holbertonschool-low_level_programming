#include <stdio.h>
/**
 * main - program that prints the number of arguments
 * @argc: int of argument
 * @argv: Pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
