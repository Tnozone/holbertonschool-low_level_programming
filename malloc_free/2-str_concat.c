#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: secod string
 *
 * Return: Nothing.
 */

char *str_concat(char *s1, char *s2)
{
int x, y, i, s;
char *ar;

if (s1 == NULL)
{
s1 = "";
}
for (x = 0; s1[x] != '\0'; x++)
{
;
}
if (s2 == NULL)
{
s2 = "";
}
for (y = 0; s2[y] != '\0'; y++)
{
;
}

s = x + y + 1;
ar = malloc(sizeof(char) * s);

if (ar == NULL)
{
return (NULL);
}
else
{
for (i = 0; i < x; i++)
{
ar[i] = s1[i];
}
for (i = 0; i <= y; i++)
{
ar[i + x] = s2[i];
}
ar[x + y] = '\0';
}
return (ar);
}
