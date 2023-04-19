#include "calc.h"

/**
 * op_add - function that add two numbres
 * @a: first number taken by the function
 * @b: second number taken by the function
 * Return: sum
 */

int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * op_sub - function that subtract two numbres
 * @a: first number taken by the function
 * @b: second number taken by the function
 * Return: difference
 */
int op_sub(int a, int b)
{
	int difference = a - b;

	return (difference);
}

/**
 * op_mul - function that multiplies two numbres
 * @a: first number taken by the function
 * @b: second number taken by the function
 * Return: product
 */
int op_mul(int a, int b)
{
	int product = a * b;

	return (product);
}

/**
 * op_div - function that divide two numbres
 * @a: first number taken by the function
 * @b: second number taken by the function
 * Return: quotient
 */
int op_div(int a, int b)
{
	int quotient = a / b;

	return (quotient);
}

/**
 * op_mod - function that finds a remainder when dividing two numbres
 * @a: first number taken by the function
 * @b: second number taken by the function
 * Return: remainder
 */
int op_mod(int a, int b)
{
	int remainder = a % b;

	return (remainder);
}
