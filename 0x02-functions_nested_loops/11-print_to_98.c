#include "main.h"

/**
 * print_to_98- prints all natural numbers from n to 98
 * @n: number taken by the function
 * Return:Always 0 on success
 */

void print_to_98(int n)
	{
		int i;

		if (n <= 98)
		{
		for (i = n; i <= 98; i++)
		{
			_putchar(i);
		if (i != 98) 
			{
				_putchar(',');
			}
		else
		{
			for (i = n; i >= 98; i--)
			{
				_putchar(i);
			if (i != 98)
			{
				_putchar(',');
			}
			}
		}
		}
		_putchar('\n');
		}
	}
