#include "main.h"

/**
 * _atoi- function that convert a string to an integer
 * @s: string to be converted
 * Return: result as integer
 */

int _atoi(char *s)
{
	int i= 0;
	int result = 0;
	int sign = 1;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		result = result * 10 + s[i] - '0';
	}
	return (sign * result);
}
