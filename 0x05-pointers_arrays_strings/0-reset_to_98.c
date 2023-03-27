#include "main.h"

/**
 * reset_to_98-function that takes a pointer to an int as parameter
 * and updates the value it points to 98
 * @n: pointer that is taken by the function
 * Return: no return
 */

void reset_to_98(int *n)
{
	int i;

	i = 98;
	*n = i;
}
