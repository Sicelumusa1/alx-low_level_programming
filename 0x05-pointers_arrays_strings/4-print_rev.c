#include "main.h"

/**
 * print_rev-function that prints a string, in reverse, followed by a new line
 * @s: pointer used by the function
 * Return: no return
 */

void print_rev(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	print_rev(s + 1);
	_putchar(*s);
	
}
