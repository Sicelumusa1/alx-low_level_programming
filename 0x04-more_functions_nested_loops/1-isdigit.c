#include "main.h"

/**
 * _isdigit- function that checks for a digit (0 through 9)
 * @c: integer to be tested by the function
 * Return: 1 if it is a digit, 0 if not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
