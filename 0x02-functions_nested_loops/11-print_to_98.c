#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: number taken by the function
 * Return:Always 0 on success
 */

void print_to_98(int n)
	{
		if (n == 0 && n <= 'b')
			{
				_putchar(n);
				_putchar(',');
				_putchar(32);
			}	
		_putchar('\n');
	}
