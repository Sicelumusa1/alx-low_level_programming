#include "main.h"

/**
 * print_last_digit- prints the last digit of a number
 * @num: integer whose last digit will be printed
 * Return: integer representing the last digit
 */

int print_last_digit(int num)
	{
		int last_digit;

		last_digit = num % 10;

		if (last_digit <= 0)
		{
			last_digit = last_digit * -1;
		}
		return (last_digit);
	}


