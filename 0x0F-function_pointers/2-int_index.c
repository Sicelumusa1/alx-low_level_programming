#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of the array
 * @cmp: pointer to function, used to compare values
 * Return: index of the first occurence, -1 if no element matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
