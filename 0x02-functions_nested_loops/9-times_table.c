#include "main.h"

/**
 * times_table- prints the 9 times table, starting with 0
 * Return:Always 0 on success
 */

void times_table(void)
	{
		int i, j, result;

		for (i = 0; i <= 9; i++)
		{
			for (j  = 0; j < 9; j++)
			{
				result = j * i;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (result < 10)
			{
				_putchar(32);
				_putchar(result + '0');
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(32);
			}
			}
			_putchar('\n');
		}
	}
