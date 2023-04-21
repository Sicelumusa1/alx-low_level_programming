#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * get _op_func - function that selects the correct 
 * function to perform the operation asked by the user
 * @s: is the operator passed as argument to the program
 * Return:pointer to the function that corresponds to 
 * the operator given as a parameter
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

	while (ops[i].op)
	{
		return (ops[i].f);
		i++;
	}

	return (get_op_func);
}
