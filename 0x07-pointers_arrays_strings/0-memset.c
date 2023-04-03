#include "main.h"

/**
 * _memset-function that fills memory with a constant byte
 * @s: is the pointer to the block of memory to be filled
 * @b: is the variable that will fill the memory
 * @n: is the number of bytes of the specified memory
 * Return: pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n != 0)
	{
		*s++ = b;
		n--;
	}
	return (s);
}
