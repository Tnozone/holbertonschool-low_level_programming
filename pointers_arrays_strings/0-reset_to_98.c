#include"main.h"
/**
 * reset_to_98 - Entry point
 * description - make a pointer point to 98
 * @n: pointer
 * Return: Always 0 (Success)
 */

void reset_to_98(int *n)
{
  int a;
  *n = &a;
  *n = 98;
}
