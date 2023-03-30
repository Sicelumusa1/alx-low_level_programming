#include "main.h"
#include <ctype.h>

/**
 * cap_string-function that capitalizes all words of a string
 * @str: string who's words to be capitalized
 * Return:pointer to the altered string
 */

char *cap_string(char *str)
{
	int i;
	char *result = str;

	if (*str && islower(*str))
	{
		*str = toupper(*str);
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (islower(str[i]) && (i == 0 || isspace(str[i - 1])))
		{
			str[i] = toupper(str[i]);
		}
	}
	return (result);
}
