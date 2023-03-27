#include "main.h"

/**
 * rev_string- function that reverses a string
 * @s: string being reversed by the function
 * Return: none
 */

void rev_string(char *s)
{
	int i;
	int length = _strlen(s);
	int middle = length / 2;
	char tmp;

	for (i = 0; i < middle; i++)
	{
		tmp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = tmp;
	}
}
