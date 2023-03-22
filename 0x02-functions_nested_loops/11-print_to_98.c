#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: number taken by the function
 * Return:Always 0 on success
 */

void print_to_98(int n)
	{
		int i;

		if (n <= 'b')
		{
		for (i = n; i <= 'b'; i++)
		{
			_putchar(i);
		if (i != 'b') 
			{
				_putchar(',');
			}
		else
		{
			for (i = n; i >= 'b'; i--)
			{
				_putchar(i);
			if (i != 'b')
			{
				_putchar(',');
			}
			}
		}
		}
		_putchar('\n');
		}
	}
