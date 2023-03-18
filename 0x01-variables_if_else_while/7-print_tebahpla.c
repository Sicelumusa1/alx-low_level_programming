#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 o success
 */

int main(void)
	{
		int ch;

		for (ch = 'z' ; ch >= 'a'; ch--)
		{
			putchar(ch);
		}
		putchar('\n');
			return (0);
	}
