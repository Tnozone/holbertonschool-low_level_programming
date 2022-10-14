#include"main.h"
/**
 * print_chessboard - Entry point
 * description - prints chessboard
 * @a: chessboard
 * Return: NULL
 */

void print_chessboard(char (*a)[8])
{
  char whites[8] = {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'};
  char blacks[8] = {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'};
  char wpawns[8] = {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'};
  char bpawns[8] = {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'};  
  
  while (*a)
    {
      if (a[0])
	{
	  _putchar(*whites);
	}
      else if (a[1])
	{
	  _putchar(*wpawns);
	}
      else if (a[6])
	{
	  _putchar(bpawns);
	}
      else if (a[7])
	{
	  _putchar(*blacks);
	}
      else
	{
           _putchar(' ');
	}
      if (a[][8])
	{
	  _putchar('\n')
	}
      a++;	
}
