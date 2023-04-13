#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: number of bytes previously allocated to ptr
 * @new_size: new number of bytes for new memory block
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		newptr = malloc(new_size);

		if (newptr)
		{
			memcpy(newptr, ptr, old_size);
			free(ptr);
		}
		return (newptr);
	}
}
