#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elents of an array
 * @size: is the size in bytes of each element
 * Return: pointer to the memory allocated
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int s;

	s = nmemb * size;
	p = malloc(s);

	if (p == NULL)
	{
		return (NULL);
	}

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	
	memset(p, 0, s);
	return (p);

}
