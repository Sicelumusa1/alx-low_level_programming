#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed
 */

void print_all(const char *const format, ...)
{
	va_list lst;
	const char *ptr;
	int i;
	char *s;
	char c;
	float f;

	if (format == NULL)
		exit(98);

	va_start(lst, format);

		while (*ptr != '\0')
		{
			switch (*ptr)
			{
				case 'i':
				i = va_arg(lst, int);
				printf("%d", i);
				break;

				case 'c':
				c = va_arg(lst, int);
				printf("%c", c);
				break;

				case 'f':
				f = va_arg(lst, double);
				printf("%f", f);
				break;

				case 's':
				s = va_arg(lst, char *);
				printf("%s", s);
				break;

				default:

				break;
			}
			if (*(ptr + 1) != '\0' && (*ptr == 'i' ||
						*ptr == 'c' ||
						*ptr == 'f' ||
						*ptr == 's'))
			{
				printf(", ");
			}
			ptr++;
		}

	printf("\n");
	va_end(lst);
}
