#include "main.h"
#include <string.h>

/**
 * _strcpy-function that copies the string pointed to by src
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: address who's string will be copied
 * @dest: destination address for the copied string
 * Return:character
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
