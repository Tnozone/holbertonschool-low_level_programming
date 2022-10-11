#include"main.h"
/**
 * *_strncat - Entry point
 * description - cancatenates two strings
 * @dest: destination buffer
 * @src: string
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int y, z = 0;

while (dest[z] != '\0')
{
z++;
}

for (y = 0; y < n && src[y] != '\0'; y++)
{
dest[z + y] = src[y];
}
return (dest);
}
