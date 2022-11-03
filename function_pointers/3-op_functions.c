#include "3-calc.h"

/**
 * op_add - adding function
 *
 * @a: first number
 * @b: second number
 * Return: r
 */

int op_add(int a, int b)
{
	int r = (a + b);
	return (r);
}

/**
 * op_sub - substraction function
 *
 * @a: first number
 * @b: second number
 * Return: r
 */

int op_sub(int a, int b)
{
	int r = (a - b);
	return (r);
}

/**
 * op_mul - multiplication function
 *
 * @a: first number
 * @b: second number
 * Return: r
 */

int op_mul(int a, int b)
{
	int r = (a * b);
	return (r);
}

/**
 * op_div - division function
 *
 * @a: first number
 * @b: second number
 * Return: r
 */

int op_div(int a, int b)
{
	int r = (a / b);
	return (r);
}

/**
 * op_mod - modulo function
 *
 * @a: first number
 * @b: second number
 * Return: r
 */

int op_mod(int a, int b)
{
	int r = (a % b);
	return (r);
}
