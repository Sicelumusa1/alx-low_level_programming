#include "main.h"

/**
 * factorial- function that returns the factorial of a given number
 * @n: the number to return the factorial of
 * Return:factorial of n provided
 */

int factorial(int n)
{
	int nfac = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}
	nfac = n * factorial(n - 1);
	return (nfac);
}

