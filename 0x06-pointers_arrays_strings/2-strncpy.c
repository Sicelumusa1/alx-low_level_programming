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

	while (n > 0)
	{

		if ((*result = *src) != 0)
		{
			src++;
		}
		result++;
		n--;
	}
	return (dest);
}
