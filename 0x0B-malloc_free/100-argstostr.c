#include "main.h"
#include <stdlib.h>
#include <string.h>


/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments passed on a command line
 * @av: value of the arguments passed
 * Return: pointer to newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int i, j, size = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	if (size == 1)
	{
		ptr = strdup(av[1]);
		if (!ptr)
		{
			return (NULL);
		}
	}

	ptr = malloc(sizeof(char) * (ac - 1));
	if (!ptr)
	{
		return (NULL);
	}

	ptr[0] = '\0';

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[size++] = av[i][j];
		}
		ptr[size++] = '\n';
	}

	return (ptr);
}
