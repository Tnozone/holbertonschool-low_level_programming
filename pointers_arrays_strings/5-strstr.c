#include"main.h"
/**
 * *_strstr - Entry point
 * description - searchers string for substring
 * @haystack: pointer to string
 * @needle: substring
 * Return: pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
int x = 0, y = 0;

while (needle[y] != '\0')
{
y++;
}
while (*haystack)
{
for (x = 0; needle[x]; x++)
{
if (haystack[x] != needle[x])
{
break;
}
}
if (x != y)
{
haystack++;
}
else
{
return (haystack);
}
}
return (0);
}
