#include "main.h"

/**
 * print_alphabet- print lowercases a to z
 * Return:Always 0 on success
 */

void print_alphabet(void)
	{
		int c;

		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
