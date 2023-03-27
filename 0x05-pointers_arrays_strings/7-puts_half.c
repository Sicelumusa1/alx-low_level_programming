#include "main.h"

/**
 * puts_half- function that prints half of a string
 * @str: string printed by the function
 * Return: none
 */

void puts_half(char *str)
{
	int a, b;
	int size;
	

	for (size = 0 ;size != '\0'; size++)
	
	if ( size % 2 == 0)
	{
		a = size / 2;
	}
	else ( a = (size + 1) / 2);

	for (b = a; b < size; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
