#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-Entry point for the program
 * This program evaluates tha last digit of a string ad compares it to the set coditions
 * it performs this function by calling on other functions
 * Return:Always 0 on success
 */

int main(void)
	{
		int n;

		srand(time (0));
		n = rand() - RAND_MAX / 2;

		if (n > 5)
		{
			printf("Last digit of n is: %d, n and is greater than 5\n");
		}
		else if (n == 0)
		{
			printf("Last digit of n is: %d, n and is 0\n");
		}
		else
		{
			printf("Last digit of n is: %d, n and is less than 6 and not 0\n");
		}
			return (0);
	}