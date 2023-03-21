#include "main.h"

/**
 * _islowercase- function that checks for lowercase character
 * @c:character to be checked
 * Return:Always an 1 on success and 0 on failure
 */

int _islowercase(int c)
	{

		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
