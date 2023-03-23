#include "main.h"

/**
 * more_numbers- function that prints 10 times the numbers, from 0 to 14
 * Return:Always 0 on success
 */

void more_numbers(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 48; y < 'F'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
