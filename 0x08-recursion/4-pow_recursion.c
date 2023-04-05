#include "main.h"

/**
 * _pow_recursion- function that returns the value of
 *  x raised to the power of y
 *  @x: base of the expressin
 *  @y: exponent of the expression
 *  Return: the value of x to the power y
 */

int _pow_recursion(int x, int y)
{
	int result;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}
	else
	{
		result = x * _pow_recursion(x, y - 1);
	}
	return (result);
}
