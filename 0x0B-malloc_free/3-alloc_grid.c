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
	int i, j;
	int **p;

	p = (int**)malloc(sizeof(int*) * width);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		p[i] = (int*)malloc(sizeof(int) * height);
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
