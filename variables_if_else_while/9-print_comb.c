#include<stdio.h>
/**
 * main - Entry point
 * description - prints single digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig;

for (dig = 0; dig <= 9; dig++)
{
putchar(dig % 10 + '0');
for (dig = 0; dig <= 9; dig++)
{
putchar(dig % 10 + '0');
putchar(',');
}
}
putchar('\n');
return (0);
}
