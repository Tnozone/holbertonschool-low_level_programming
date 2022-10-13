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
char a[] = {'a', 'e', 'o', 't', 'l'};
char n[] = {'4', '3', '0', '7', '1'};
 
while (*st)
{
for (i = 0; i < 5; i++)
{
if (*st == a[i] || *st == a[i] - 32)
{
*st = n[i] + 0;
}
}
st++;
}
return (st);
}
