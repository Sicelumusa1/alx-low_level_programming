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
	
	if (nmemd == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	s = nmemb * size;
	p = malloc(s);

	if (p == NULL)
		return (NULL);

	memset(p, 0x0, s);
	return (p);

}
