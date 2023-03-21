#include <stdio.h>
#include "main.h"

#define MAXSTRING 80

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int _putchar(char c)
{
	return (putchar(c));
}
int main(void)
	{
		char message[MAXSTRING] = "_putchar";

		for (int count = 0 ; count < MAXSTRING ; count++)
		{
			if (message[count] == '\0')
			{
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(message[count]);
			}
		}
		return (0);
	}
