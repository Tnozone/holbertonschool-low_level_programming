#include"main.h"
/**
 * *_strcpy - Entry point
 * description - prints elements of an array
 * @dest: destination buffer
 * @src: string
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
int x = 0, len = 0;

while (src[len] != '\0')
{
len++;
}
while (x <= len)
{
dest[x] = src[x];
x++;
}
}
