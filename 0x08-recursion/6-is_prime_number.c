#include "main.h"

/**
 * is_prime_number-function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * @n: number to be tested if its prime or not
 * Return: 1 if a number is prime and 0 if its not
 */

int is_prime_number(int n)
{
	int i;

	if (n <= 1 || n % 2 == 0)
	{
		return (0);
	}

	for  (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

