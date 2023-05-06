#include "main.h"

/**
 * get_bit - determines the value of a bit at given index
 * @n: integer to be presented in binary form at given index
 * @index: position at which n must be determined
 * Return: value at index or -1 if index is out of range
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n & mask) != 0);
}
