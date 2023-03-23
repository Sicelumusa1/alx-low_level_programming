#include <stdio.h>

/**
 * main-Entry point for the program
 * Return:Always 0 on success
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
		{
			printf("FizzBuzz");
			putchar(32);
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
			putchar(32);
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
			putchar(32);
		}
		else
		{
			printf("%d", a);
			putchar(32);
		}
	}
	return (0);
}
