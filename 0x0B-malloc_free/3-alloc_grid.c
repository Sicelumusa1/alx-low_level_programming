#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: row of 2-D array
 * @height: colomn of 2-D array
 * Return: pointer to a 2-D array
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	p = (int **)malloc(sizeof(int *) * width);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (; i < height; i++)
	{
		p[i] = (int *)malloc(sizeof(int) * width);

		if (p[i] == 0)
		{
			for (; j < i; j++)
			{	
				free(p[j]);
			}

			free(p);
			return (NULL);
		}

		for (; j < width; j++)
		{

			p[i][j] = 0;
		}
	}
	return (p);
}
