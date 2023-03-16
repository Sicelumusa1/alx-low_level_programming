#include <stdio.h>

/**
 * main-Entry point for the program
 * This program is responsible for printing the sizes of data types
 * it call on other functions to perform its functionality
 * Return:Always 0 on success
 */

int main(void)
	{
		printf("Size of char : %d byte(s)\n", sizeof(char));
		printf("Size of int : %d byte(s)\n", sizeof(int));
		printf("Size of long int : %d byte(s)\n", sizeof(long int));
		printf("Size of long long int : %d byte(s)\n", sizeof(long long int));
		printf("Size of float : %d byte(s)\n", sizeof(float));
		return (0);
	}
