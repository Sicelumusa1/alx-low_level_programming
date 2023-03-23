#include "main.h"

/**
 * print_triangle-function that prints a triangle
 * @size:determines the size of a triangle
 * Return: no return
 */

void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a < size; a++)
	{
		for (b = 1; b < a; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
