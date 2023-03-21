#include "main.h"

/**
 *print_alphabet_x10-function that prints 10 times the alphabet, in lowercase
 * Return:Always 0 on success
 */

void print_alphabet_x10(void)
	{
		int c, e;

		for (e = 0 ; e <= 10 ; e++)
		{
			for (c = 'a' ; c <= 'z' ; c++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
