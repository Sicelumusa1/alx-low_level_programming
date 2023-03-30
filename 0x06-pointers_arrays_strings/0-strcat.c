#include "main.h"

/**
 * _strcat- function that concatenates two strings
 * @dest:pointer to the string to append to
 * @src:pointer to the string to be appended
 * Return:pointer to the concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	return (result);
}
