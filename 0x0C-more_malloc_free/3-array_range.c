#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers
 * @min: minimum number in an array of integers
 * @max: maximum number in an array of integers
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}
	for (; i <= max - min; i++)
	{
		p[i]= min + i;
	}
	return (p);
}

