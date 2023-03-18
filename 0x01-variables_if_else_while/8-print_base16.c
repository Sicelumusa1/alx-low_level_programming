#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int main(void)
	{
		char i = '0';

		while (i < '9')
		{
			putchar(i);
			i++;
		}
		i = 'b';
		while (i <= 'c')
		{
			putchar(i);
			i++;
		}
		putchar('\n');
		return (0);
	}
