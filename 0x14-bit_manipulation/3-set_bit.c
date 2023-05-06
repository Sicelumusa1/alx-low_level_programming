#include "main.h"

/**
 * set_bit - set value of bit to 1 in given position
 * @n: pointer to UL integer whose bit is to be set to 1
 * @index: position at which setting is done
 * Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= mask;
	return (1);
}

