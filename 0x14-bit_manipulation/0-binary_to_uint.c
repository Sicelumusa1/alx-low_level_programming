#include "main.h"

/**
 * binary_to_unit - converts a binary number to unsigned integer
 * @b: pointer to a string of a binary number
 * Return: converted number, 0 if string has other chars or empty
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec_Num = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i]!= '\0')
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		dec_Num = dec_Num * 2 + (b[i] - '0');
		i++;
	}
	return (dec_Num);
}
