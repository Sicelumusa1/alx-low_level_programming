#include "main.h"

/**
 * is_prime_number-function that returns 1 if the
 * is_prime- checks whether a number is prime or not
 * input integer is a prime number, otherwise return 0
 * @n: number to be tested if its prime or not
 * Return: 1 if a number is prime and 0 if its not
 */

int is_prime_number(int n)
{
		if (n <= 1)
		{
			return (0);
		}
		if (n == 2)
		{
			return (1);
		}
		return (is_prime(n, 2));
}

int is_prime(int n, int i)
{
		if (i <= n / 2)
		{
			return (1);
		}
		if (n % i == 0)
		{
			return (0);
		}
		else
		return (is_prime(n, i + 1));
}



