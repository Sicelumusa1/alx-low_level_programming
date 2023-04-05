#include "main.h"

/**
 * _strlen_recursion- function that returns the length of a string
 * @s: pointer to the string whos' length is to be dertemined
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (0);
	}
	return (count = 1 + _strlen_recursion(s + 1));
}
