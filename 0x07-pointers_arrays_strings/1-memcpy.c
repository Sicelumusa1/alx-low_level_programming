#include "main.h"

/**
 * _memcpy-function that copies memory area
 * @dest:pointer to the memery where another
 *  memery will be copied to
 * @src:pointer to the memory to be copied
 * @n: number of bytes of memory copied
 * Return: pointer to the start of dest memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (tmp);
}
