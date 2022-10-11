#include"main.h"
/**
 * *_strcat - Entry point
 * description - cancatenates two strings
 * @dest: destination buffer
 * @src: string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
int x, y = 0, len = 0;

while (src[len] != '\0')
{
len++;
}
x = (len * 2) - 1;
  
while (len <= x)
{
dest[len] = src[y];
y++;
len++;
}
return (dest);
}
