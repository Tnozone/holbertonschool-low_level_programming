#include"main.h"
/**
 * *leet - Entry point
 * description - translates string into 1337-speak
 * @st: pointer to string
 * Return: string
 */

char *leet(char *st)
{
int i = 0;

while (st[i] != '\0')
{
if (st[i] == 'a' || st[i] == 'A')
{
st[i] = '4';
}
else if (st[i] == 'e' || st[i] == 'E')
{
st[i] = '3';
}
else if (st[i] == 'o' || st[i] == 'O')
{
st[i] = '0';
}
else if (st[i] == 't' || st[i] == 'T')
{
st[i] = '7';
}
else if (st[i] == 'l' || st[i] == 'L')
{
st[i] = '1';
}
i++;
}
  
return (st);
}
