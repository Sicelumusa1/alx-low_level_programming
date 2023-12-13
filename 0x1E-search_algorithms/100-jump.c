#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using jump search algorithm
 * @array: array to search from
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1 if it is not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i;
	size_t prev = 0;
	size_t step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	for (i = prev; i < size && i <= step; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
