#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int main(void)
	{
		int i;

		for (i = '0';i <= '9';i++)
		{
			putchar(i);
			putchar(44);
			putchar(32);
		}
		putchar(10);
		return (0);
	}
