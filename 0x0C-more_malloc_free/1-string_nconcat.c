#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to the string to concatenate to
 * @s2: pointer to the string to concatenate
 * @n: number of bytes of string pointed by s2 to concatenate
 * Return: pointer to the newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0, j = 0;
	char *p;

	p = malloc(strlen(s1) + strlen(s2) + 1);

	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}

	if (n != '\0')
	{
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

			if (--n == 0)
			{
				p[i] = '\0';
				break;
			}
		}
	}
	return (p);
}
