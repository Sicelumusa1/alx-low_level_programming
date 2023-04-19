#include "function_pointer.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (*argv[2] != '+' || *argv[2] != '-' || *argv[2] != '*' ||
		       *argv[2] != '/' || *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	
	op_func = get_op_func (argv[2]);

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
