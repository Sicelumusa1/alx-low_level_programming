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
	char *p;
	int size_s1 , size_s2;
	int i = 0, j = 0;

	size_s1 = strlen(s1);
	size_s2 = strlen(s2);

	p = (char *)malloc(size_s1 + size_s2 + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';

	return (p);

}
