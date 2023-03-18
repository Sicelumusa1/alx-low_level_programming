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
		int lastdigit = n% 10;

		printf("Last digit of %d is" , n);
		
		printf("%d" , lastdigit);

		if (lastdigit > 5)
		{
			printf("and is greater than 5\n");
		}
		else if (lastdigit == 0)
		{
			printf("and is 0\n");
		}
		else
		{
			printf("and is less than 6 and not 0\n");
		}
			return (0);
	}
