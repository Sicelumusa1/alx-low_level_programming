#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - functions that prints a name
 * @name: pointer to the string to be printed
 * @f: pointer to print_name funtion
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
