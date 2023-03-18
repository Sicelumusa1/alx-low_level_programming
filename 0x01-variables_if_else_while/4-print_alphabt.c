#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int main(void)
	{
		int ch = 'a';

		while (ch <= 'z')
		{
			if (ch != 'e' && ch != 'q')
			putchar(ch);
			ch++;
		}
		putchar('\n');
			return (0);
	}
