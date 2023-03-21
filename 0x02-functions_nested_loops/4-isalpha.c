#include "main.h"

/**
 * _isalpha-checks for alphabetic character
 * @c: character to be tested by the program
 * Return:is 1 if a lower or uppercase alphabet if found
 */

int _isalpha(int c)
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		return (0);
	}
