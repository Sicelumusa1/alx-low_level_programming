#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int main(void)
	{
		int a, b;

		for (a = 0 ; a<= 99 ; a++)
		{
			for (b = a ; b <= 99 ; b++)
			{
				putchar(a / 10 + '0');
				putchar(a % 10 + '0');
				putchar(32);
				putchar(b / 10 + '0');
				putchar(b % 10 + '0');
			}
			if (a != 99 || b != 99)
			{
				putchar(44);
				putchar(32);
			}
		}
		putchar(10);
		return (0);
	}
