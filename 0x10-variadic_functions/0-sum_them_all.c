#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - fuction that sums all its parameters.
 * @n: number of parameters passed
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	va_start(list, n);
	
	if (n == 0)
	{
		return (0);
	}

	for (i = 1; i <= n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}

