#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of an array in bytes
 * @c: character to initialize an array with
 * Return: pointer to the array on success or NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i <= size; i++)
	{
		if (p == NULL)
		{
			return (NULL);
		}
		p[i] = c;
	}
	return (p);
}
