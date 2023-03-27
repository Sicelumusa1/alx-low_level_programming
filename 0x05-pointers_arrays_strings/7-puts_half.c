#include "main.h"

/**
 * puts_half- function that prints half of a string
 * @str: string printed by the function
 * Return: none
 */

void puts_half(char *str)
{
	int n, b;
	int size;


	for (size = 0; str[size] != '\0'; size++)
	{
		if (size % 2 == 0)
		{
			n = size / 2;
		}
		else
		{
			(n = (size + 1) / 2);
		}
	}

	for (b = n; b < size; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
