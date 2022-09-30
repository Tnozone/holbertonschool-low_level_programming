#include <stdio.h>
/**
 * main - Entry point
 * description - print the size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{
int intType;
float floatType;
double doubleType;
char charType;
printf("%z bytes \n"), sizeof(intType);
printf("%z bytes \n"), sizeof(doubleType);
printf("%z bytes \n"), sizeof(flaotType);
printf("%z bytes \n"), sizeof(charType);
return (0);
}
