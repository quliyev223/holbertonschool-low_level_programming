#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct function for the given operator
 * @s: operator passed as argument ("+", "-", "*", "/", "%")
 *
 * Return: pointer to the corresponding function, or NULL
 * if invalid operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL} /* marks the end of the array */
	};
	int i = 0;

	/* loop through the operators array */
	while (ops[i].op != NULL)
	{
		/* If the input matches the current operator, return its function */
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}


	/* return NULL if no operator matches */
	return (NULL);
}
