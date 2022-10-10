#include<stdio.h>
/**
 * main - Entry point
 * description - prints fibonacci sequence
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
long t1 = 1, t2 = 2;
long next = t1 + t2;

printf("%d, %d, ", t1, t2);
for(i = 3; 1 <= 50; ++i)
{
printf("%ld, ", next);
t1 = t2;
t2 = next;
next = t1 + t2;
}
printf("\n");
return (0);
}
