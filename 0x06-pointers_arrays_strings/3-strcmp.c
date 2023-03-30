#include "main.h"

/**
 * _strcmp-function that compares two strings
 * @s1:string to be compared
 * @s2:string to be compared
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0; 
	int areEqual;

	while (s1[i] == s2[i])
	{
		i++;
	}
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == '\0' && s2[i] != '\0')
	{
		areEqual = 1;
	}
	else
	{
		areEqual = -1;
	}
	return (areEqual);
}
