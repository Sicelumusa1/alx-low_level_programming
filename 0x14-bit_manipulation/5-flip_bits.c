#include "main.h"

/**
 * flip_bits - determines the No. of bits to flip to turn one Number to another
 * @n: fist Nummber
 * @m: second Number
 * Return: No. of bits to flip to move from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int count = 0;

	while (difference != 0)
	{
		count += difference & 1;
		difference >>= 1;
	}

	return (count);
}
