#include "main.h"
#include <string.h>

/**
 * _strspn-function that gets the length of a prefix substring
 * @s: string to be searched
 * @accept: string to search for in string s
 * Return: size of the initial segment of string
 * s before encontering character contained in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char *p;

	for (p = s; *p != '\0'; p++)
	{
		if (!strchr(accept, *p))
		{
			break;
		}
	}
	return (p - s);
}
