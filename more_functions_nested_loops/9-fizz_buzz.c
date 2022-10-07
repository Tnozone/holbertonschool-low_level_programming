#include<stdio.h>
/**
 * main - Entry point
 * @n: integer
 * description - prints 1 - 100, and buzzes on multiples
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
  
for (n = 0; n <= 100; n++)
{
if (n % 3 == 0)
{
printf("Fizz ");
}
else if (n % 5 == 0)
{
printf("Buzz ");
}
else if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz ");
}
else
{
printf("%d ", n);
}
}
return (0);
}
