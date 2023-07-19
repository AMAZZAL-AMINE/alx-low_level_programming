#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s: operator passed as argument
 *
 * Return: pointer to the function that corresponds to the operator given as a
 * parameter, or NULL if s does not match any of the 5 expected operators
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}
	};
	int i;

	for (i = 0; ops[i].op; i++)
		if (*s == *ops[i].op)
			return (ops[i].f);
	return (NULL);
}
