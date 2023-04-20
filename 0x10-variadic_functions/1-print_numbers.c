#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: pointer to the string to be printed between numbers
 * @n: number of integers passed
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list lst;

	va_start(lst, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(lst, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lst);
}

