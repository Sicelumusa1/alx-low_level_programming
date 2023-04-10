#include <stdio.h>
#include "stdlib.h"

/**
 * main-Entry point for the program that adds positive numbers
 * @argc:number of arguments passed on command line
 * @argv:values of the arguments passed
 * Return:1 on failure and 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 1, num = 0;
	int result = 0;
		
	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num < 0)
		{
			printf("error\n");
			return (1);
		}
			result += num;
	}
	printf("%d\n", result);
	return (0);
}
