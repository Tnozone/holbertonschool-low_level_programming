#include<stdio.h>
/**
 * main - Entry point
 * description - prints alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
char al;

for (al = 'a'; al <= 'z'; al++)
{
if (al == 'e')
{
continue;
}
if (al == 'q')
{
continue;
}
putchar(al);
}
putchar('\n');
return (0);
}
