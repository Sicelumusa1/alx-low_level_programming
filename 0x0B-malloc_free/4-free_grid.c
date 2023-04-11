#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function that frees a 2 dimensional grid
 * created by your alloc_grid function
 * @grid: pointer to the 2-D array
 * @height: size of the array column
 * Return: none
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
