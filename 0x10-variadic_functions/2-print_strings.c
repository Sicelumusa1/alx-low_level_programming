#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that print strings
 * @separator: pointer to a string to print between strings
 * @n: number of strings passed
 * Return: none
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *str;
	va_list lst;

	va_start(lst, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(lst, const char*);

		printf("%s", str != NULL ? str : "(nil)");
		if (separator != NULL && i != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(lst);
}
