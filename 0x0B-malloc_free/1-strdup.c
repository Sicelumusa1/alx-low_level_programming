#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _strdup -  function that returns a pointer to a newly allocated space
 * _strlen-function that calculates the length of a string
 * @str: pointer to the string to be duplicated
 * Return: pointer to a newly allocated  * space in memory or NULL on failure.
 */

char *_strdup(char *str)
{

	char *pdupl;
	char *p_to_iterate;
	int str_size;

	str_size = strlen(str);

	pdupl = (char *)malloc(sizeof(char) * str_size + 1);

	if (pdupl == NULL)
	{
		return (NULL);
	}

	p_to_iterate = pdupl;

	while (*str != '\0')
	{
		*p_to_iterate = *str;
		p_to_iterate++;
		str++;
	}
	*p_to_iterate = '\0';

	return (pdupl);
}

