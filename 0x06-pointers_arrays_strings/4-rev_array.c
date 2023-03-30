#include "main.h"

/**
 * reverse_array-function that reverses the content of an array of integers
 * @a: an array to be reversed
 * @n:number of elements in an array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int arr, i;

	for (i = 0; i < n / 2; i++)
	{
		arr = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = arr;
	}
}
