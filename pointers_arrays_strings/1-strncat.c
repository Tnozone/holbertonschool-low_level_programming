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
int y = 0, z = 0;

while (dest[z] != '\0')
{
z++;
}

while (y <= n)
{
dest[z] = src[y];
y++;
z++;
}
return (dest);
}
