#include<stdio.h>
/**
 * main - Entry point
 * description - prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
int dig;

for (dig = 0; dig <= '9'; dig++)
{
putchar(dig + '0');
}
for (dig = 'a'; dig <= 'f'; dig++)
{
putchar(dig);
}
putchar('\n');
return (0);
}
