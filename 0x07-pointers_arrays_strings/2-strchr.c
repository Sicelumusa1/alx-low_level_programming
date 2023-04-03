#include "main.h"
#include <stddef.h>

/**
 * _strchr- function that locates a character in a string
 * @s:pointer to the string to be searched
 * @c:charecter to search for
 * Return:pointer to the address of the first occurrence of
 * character c or NULL if c is not found
 */

char *_strchr(char *s, char c)
{
	char*pc = &c;

	for (; *s != (char)c; ++s)
	{
		if (*s == '\0')
		{
			return (NULL);
		}
	}
	return (pc);
}

