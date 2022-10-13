#include"main.h"
/**
 * *cap_string - Entry point
 * description - capitalizes all words
 * @st: pointer to string
 * Return: string
 */

char *cap_string(char *st)
{
int i = 0;

while (st[i] != '\0')
{
if (st[i - 1] == ',')
{
st[i] -= 32;
}
i++;
}

return (st);
}
