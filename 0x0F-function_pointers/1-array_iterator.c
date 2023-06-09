#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: array to be iterated
 * @size: size of the array
 * @action: pointer to the to use
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size ; i++)
	{
		action(array[i]);
	}
}
