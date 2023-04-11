#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: pointer to string to concatenate to
 * @s2: pointer to string to concatenate
 * Return: pointer to a new concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *p = s1;
	int size_s1;
	int size_s2;

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);

	
	p = (char*)malloc(sizeof(char) * (size_s1 + size_s2) + 1);

	if (p == NULL)
	{
		return (NULL);
	}
	
	while (*s1 != '\0')
	{
		s1++;
	}

	while ((*s1++ = *s2++) != '\0')
	{

	}
	return (p);
}
