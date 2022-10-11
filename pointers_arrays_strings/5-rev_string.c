#include"main.h"
/**
 * rev_string - Entry point
 * description - prints a string
 * @s: pointer to string
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
int x = 0, y = 0, end = 0;

while (s[end] != '\0')
{
end++;
}
end--;

while (y < end)
{
x = s[end];
s[end] = s[y];
s[y] = x;
y++;
end--;
}
}
