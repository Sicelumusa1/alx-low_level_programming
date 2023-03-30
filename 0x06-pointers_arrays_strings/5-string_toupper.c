#include "main.h"
#include <ctype.h>

/**
 * string_toupper-function that changes all lowercase letters to uppercase.
 * @str:string to be converted
 * Return: converted character string
 */
char *string_toupper(char *str)
{
	char *pstr = str;

	while (*pstr != '\0')
	{
		*pstr = toupper(*pstr);
		pstr++;
	}
	return (str);
}
