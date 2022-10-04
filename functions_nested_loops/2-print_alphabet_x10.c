#include"main.h"
/**
 * print_alphabet_x10 - Entry point
 * description - print alphabet
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
char alph;
int i = 0;
while (i < 10)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
i++;
_putchar('\n');
}
}
