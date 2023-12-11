#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>


/**
 * linear_search - Searches for a given from an array of intergers
 * @array: The array to seach from
 * @size: The number of elements in an array
 * @value: The value to search for
 * Return: The index of the value or -1 if value not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/* Check if the array exists*/
	if (array == NULL)
	{
		return (-1);
	}

	/* iterate the array seaching for the given value */
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	/* If the array is finished without finding the given value*/
	return (-1);
}
