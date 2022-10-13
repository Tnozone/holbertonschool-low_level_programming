#include"main.h"
/**
 * *_memcpy - Entry point
 * description - capitalizes all words
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: unsigned int
 * Return: string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
