#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * the operation asked by the user
 * @s: char operator
 * Return: pointer to the function that corresponds to the operator.
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
	int num = 0;

	while (num < 10)
	{
		if (s[0] == ops->op[num])
			break;
		num++;
	}

	return (ops[num / 2].f);
}
