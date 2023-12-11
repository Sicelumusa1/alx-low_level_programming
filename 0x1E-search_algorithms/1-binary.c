#include "search_algos.h"
#include <stdio.h>


/**
 * binary_search - Searches for a given from an array of intergers
 * using binary search algorithm
 * @array: The array to seach from
 * @size: The number of elements in an array
 * @value: The value to search for
 * Return: The index of the value or -1 if value not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (high + low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
			else
				printf("\n");
		}

		if (array[mid] == value)
		{

			return (mid);
		}
		else if (value < array[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}


	return (-1);
}
