#include "main.h"

/**
 * _strncpy-function that copies a string
 * @src:string to be copied
 * @dest: strinh to which src goes to
 * @n: the length of src
 * Return: a pointer to the new string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		result[i] = src[i];
	}

	for (i = 0; i < n; i++)
	{
		result[i] = '\0';
	}

	return (dest);
}
