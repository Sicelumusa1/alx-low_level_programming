#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point for the program
 * This program evaluates if a number is positive, zero or negative
 * it call on other functions to perform its fanctionality
 * Return:Always 0 on success
 */

int main(void)
	{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX/ 2;

		printf("%d\n", n);

		if (n > 0)
		{
			printf("is positive\n");
		}
		else if (n < 0)
		{
			printf("is negative\n");
		}
		else
		{
			printf("is zero\n");
		}
			return (0);
	}
