#include "function_pointers.hi"

/**
 * print_name - functions that prints a name
 * @name: pointer to the string to be printed
 * @f: pointer to print_name funtion
 * Return: none
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0;

	while (name[i] != '\0')
	{
		i++;
	}

	if (f == NULL || name == NULL)
		return;

	f(name);
}
