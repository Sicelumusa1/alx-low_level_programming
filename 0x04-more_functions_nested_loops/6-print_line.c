#include "main.h"

/**
 * print_line- function that draws a straight line in the terminal
 * @n: integer taken by the function
 * Retyrn:Always 0 on success
 */

void print_line(int n)
{

	while (n >= 1 && n <= 10)
	{
		_putchar(95);
		n--;
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
