#include <stdio.h>
#include <stdlib.h>

/**
 * main-Entry point for the program that adds positive numbers
 * @argc: number of arguments passed on command line
 * @argv: values of the arguments passed
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i = 1, result = 0;
	int num = atoi(argv[i]);

	if (argc == 1)
		printf("0\n");

	if (num < 0)

	for (; i <= argc; i++)
	{
		result += num;
		printf("%d\n", result);
	}
	return (1);
}
