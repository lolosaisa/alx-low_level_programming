#include "3-calc.h"

/**
 * get_op_func - Selects the correct function to
 * perform the operation asked by the user
 * @s: character operator
 *
 * Return: Pointer to the function need by the user
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
	
	int a;

	a = 0;

	while (a < 10)
	{
		if (s[0] == ops->op[a])
			break;
		a++;
	}

	return (ops[a / 2].f);
}
