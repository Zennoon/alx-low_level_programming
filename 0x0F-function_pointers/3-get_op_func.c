#include <stdio.h>
#include <string.h>
#include "calc.h"

/**
 * get_op_func - Accepts an operator from main and returns appropriate func
 * @s: The operator passed from main
 *
 * Return: The function corresponding to the operator in s
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (i < 6)
	{
		if (!(strcmp(s, ops[i].op)))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
