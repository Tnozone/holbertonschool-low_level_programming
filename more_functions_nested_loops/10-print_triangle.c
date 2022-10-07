#include"main.h"
/**
 * print_triangle - Entry point
 * description - draws a triangle
 * @size: integer for triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
  int s, h, t;

  if (size > 0)
    {
      for (h = 0; h < size; h++)
	{
	  for (t = (1 - (size - h)); t < 0; t++)
	    {
	      _putchar(' ');
	    }
	  for (s = 0; s <= h; s++)
            {
              _putchar('#');
            }
	  _putchar('\n');
	}
    }
  else
    {
      _putchar('\n');
    }
}
