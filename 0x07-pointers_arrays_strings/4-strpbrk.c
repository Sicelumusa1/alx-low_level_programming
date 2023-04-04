#include "main.h"
#include <stddef.h>

/**
 * _strpbrk-function that searches a string for any of a set of bytes
 * @s:pointer to the string to be searched
 * @accept:pointer to the character to search for
 * Return:pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ps = s;
	char *paccept = accept;

	for (; *ps != '\0'; ++ps)
	{
		for (; *paccept != '\0'; ++paccept)
		{
			if (*ps == *paccept)
			{
				return (ps);
			}
		}
		paccept = accept;
	}
	return (NULL);
}
