#include "main.h"
#include <string.h>

/**
 * is_palindrome-function that determines if 
 * a string is a palindrome not
 * palindrome_check- checks if a string is palindrome
 * @s: pointer to the string to be tested
 * Return: 1 if string is palindrome, 0 if not
 */

int is_palindrome(char *s)
{	
	int i = 0, len, result;

	len = strlen(s);

	if (len == 0)
	{
		return (1);
	}

	if (s[i] == s[len-i-1])
	{
		return (1);
	}
	
	if (s[0] != s[len -1])
	{
		return (0);
	}
	result = is_palindrome(s + 1);
	return (result);
}
