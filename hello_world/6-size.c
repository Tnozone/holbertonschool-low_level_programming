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
long int longintType;
long long int longlongintType;
char charType;
printf("Size of a char: %z bytes \n"), sizeof(charType);
printf("Size of an int: %z bytes \n"), sizeof(intType);
printf("Size of a long int: %z bytes \n"), sizeof(longintType);
printf("Size of a long long int: %z bytes \n"), sizeof(longlongintType);
printf("Size of a float: %z bytes \n"), sizeof(floatType);
return (0);
}
