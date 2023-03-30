#include "main.h"

/**
 * leet-function that encodes a string into 1337
 * @str: string to be encoded to a number
 * Return: a string
 */

char *leet(char *str)
{
	int i;
	char *s = str;
	char *leet_ch = "aAeEoOtTlL";
	char *leet_num = "4433007711";

	while (*s != '\0')
	{
		i = 0;
		while (leet_ch[i] != '\0')
		{
		if (*s == leet_ch[i])
		{
			*s = leet_num[i];
			break;
		}
		i++;
		}
		s++;
	}
	return (str);
}
