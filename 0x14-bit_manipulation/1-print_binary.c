#include "main.h"

/**
 * print_binary - prints binary representation of unsigned long integer
 * @n: long int to print in binary form
 */

void print_binary(unsigned long int n)
{
	unsigned int power_of_2 = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (power_of_2 <= n / 2)
	{
		power_of_2 *= 2;
	}

	while (power_of_2 > 0)
	{
		if (n >= power_of_2)
		{
			_putchar('1');
			n -= power_of_2;
		}
		else
		{
			_putchar('0');
		}
		power_of_2 /= 2;

	}
}
