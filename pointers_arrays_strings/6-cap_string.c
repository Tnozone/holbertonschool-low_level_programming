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
st[0] -= 32;
 
while (st[i] != '\0')
{
if (st[i] == ',' || st[i] == '.' || st[i] == ' ' || st[i] == ';' || st[i] == '\n' || st[i] == '!' || st[i] == '?' || st[i] == '"' || st[i] == '(' || st[i] == ')' || st[i] == '{' || st[i] == '}'|| st[i] == '\t')
{
st[i + 1] -= 32;
}
i++;
}

return (st);
}
