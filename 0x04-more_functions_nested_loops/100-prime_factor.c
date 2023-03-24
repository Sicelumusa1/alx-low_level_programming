#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:0
 */

int main(void)
{
	long n = 612852475143;
	long a;

	for (a = 2; a <= n; a++)
	{
		while (n % a == 0)
		{
			n /= a;
		}
	}
	printf("%ld\n", a - 1);
	return (0);
}
