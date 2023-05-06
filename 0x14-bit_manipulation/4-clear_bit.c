#include "main.h"

/**
 * clear_bit - sets value of bit to 0 in given position
 * @n: pointer to UL intger whose bit should be clered
 * @index: position at which the operation must be done
 * Return: 1 on success, -1 on failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~mask;
	return (1);
}
