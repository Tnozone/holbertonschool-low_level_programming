#include"main.h"
/**
 * rev_string - Entry point
 * description - prints a string
 * @s: pointer to string
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
int x, y = 0, end = 0;

while (s[end] != '\0')
{
end++;
}
for (x = end - 1; x >= 0; x--)
{
s[y] = s[x];
y++;
} 
}
