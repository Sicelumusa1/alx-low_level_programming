#include "main.h"

/**
 * print_square-function that prints a square
 * @size:determines how big a square will be
 * Return:no return
 */

void print_square(int size)
{
	int n;

	/*for (size = 1; size <= 9; size++)*/
	{
		for (n = 0; n <= 9; n++)
		{
			_putchar('#');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
	}
}
