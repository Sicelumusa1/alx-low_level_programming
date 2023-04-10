#include "main.h"

/**
 * _sqrt_recursion- function that returns the natural square root of a number
 * mysqrt_recursion- function that guesses the sruare root
 * @n: number whos' square root shold be returned by the function
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	return (mysqrt_recursion(n, 1));
}
int mysqrt_recursion(int n, int x)
{
	int y;

	y = (x + n / x) / 2;

	if (y == x)
	{
		return (x);
	}
	else
	return (mysqrt_recursion(n, y));
}
