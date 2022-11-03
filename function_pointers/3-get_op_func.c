#include"3-calc.h"

/**
 * - entry
 * @gat_op_func: function pointer
 * @s: The operator
 * Return: 
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i;

	if (s != '+' && s != '-' && s != '*' &&
	s != '/' && s != '%')
		return (NULL);


}
