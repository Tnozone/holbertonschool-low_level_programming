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
if (st[i] == 'a' || st[i] == 'A' ||
    st[i] == 'e' || st[i] == 'E' ||
    st[i] == 'o' || st[i] == 'O' ||
    st[i] == 't' || st[i] == 'T' ||
    st[i] == 'l' || st[i] == 'L')
{
'a' = '4' || 'A' = '4';
'e' = '3' || 'E' = '3';
'o' = '0' || 'O' = '0';
't' = '7' || 'T' = '7';
'l' = '1' || 'L' = '1';
}
i++;
}
  
return (st);
}
