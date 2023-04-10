#include <stdio.h>
#include "stdlib.h"

/**
 * main - Entry point for the program that adds positive numbers
 * @argc: number of arguments passed on command line
 * @argv: values of the arguments passed
 * Return:0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int i = 1, j = 0;
	int num = 0;
	int result = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (; i < argc; i++)
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}

		num = atoi(argv[i]);
		result += num;
	}
	printf("%d\n", result);
	return (0);
}
