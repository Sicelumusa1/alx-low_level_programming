#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * malloc_checked-function that allocates memory using malloc
 * @b: number of bytes of memory to be allocated
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(p) * b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
