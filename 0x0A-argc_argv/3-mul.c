#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-Entry point foor a program that multiplys two numbers
 * @argc:number of arguments passed on a command line
 * @argv:value of arguments passed on a command line
 * Return:0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{

	int num1, num2;
	int i = 1, result = 0;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	if (argc <= 2)
	{
		printf("error\n");
		return (1);
	}

	for (; i <= argc; i++)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		result = num1 * num2;
	}
	printf("%d\n", result);
	return (0);
}
