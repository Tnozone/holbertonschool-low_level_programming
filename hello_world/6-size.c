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
printf("int size: %z bytes \n"), sizeof(intType);
printf("double size: %z bytes \n"), sizeof(doubleType);
printf("float size: %z bytes \n"), sizeof(floatType);
printf("char size: %z bytes \n"), sizeof(charType);
return (0);
}
