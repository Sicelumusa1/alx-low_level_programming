#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int main(void)
	{
		int NUM;
		char NUL, SOH;

		for (NUM = 0; NUM <= 9; NUM++)
		{
			putchar(NUM);
		}
		putchar(10);
		return (0);
	}
