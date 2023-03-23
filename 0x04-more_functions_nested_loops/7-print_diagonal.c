#include "main.h"

/**
 * print_diagonal-function that draws a diagonal line on the terminal
 * @n: is a number of times a function runs
 * Return: no return
 */

void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
}
