#include "main.h"

/**
 * _sqrt_recursion- function that returns the natural square root of a number
 * @n: number whos' square root shold be returned by the function
 * Return: square root of n
 */

int _sqrt_recursion(int n)

	int x = 1, y;

	if (n < 1)
		return (-1);

	y = (x + n / x) / 2;

	if (y == x)
	{
		return (x);
	}
	else
	
		return (mysqrt_recursion(n, y));
	
}
