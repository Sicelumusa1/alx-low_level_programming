#include "main.h"

/**
 * _strncat-function that concatenates two strings
 * @src: string to be appended
 * @dest:string to concatenate to
 * @n: size of src string
 * Return:a pointer to the new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	if (n != '\0')
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while ((*dest = *src) != 0)
		{
			dest++;
			src++;
			if (--n == 0)
			{
				*dest = '\0';
				break;
			}
		}
	}
	return (result);
}
