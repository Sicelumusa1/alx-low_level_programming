#include "main.h"

/**
 * swap_int- function that swaps the values of two integers
 * @a: pointer to be swaped
 * @b: pointer to be swaped with a
 * Return: no return
 */

void swap_int(int *a, int *b)
{
	int i = 10;
	int j = 6;

	i = *a;
	j = *b;

	*b = i;
	*a = j;
}
