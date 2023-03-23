#include "main.h"

/**
 * _isupper- function that checks for uppercase character
 * @c: character to be tested by the function
 * Return:1 is it is a uppercase, 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


