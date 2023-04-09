#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main-Entry point foor a program that multiplys two numbers
 * @argc:number of arguments passed on a command line
 * @argv: value of arguments passed on a command line
 * Return: the results if success, error if numbers entererd are
 * not two
 */

int main(int argc, char *argv[])
{
	
	int op1 = atoi(argv[1]);
	int op2 = atoi(argv[2]);
	int i, results = 0;
	
	for (i = 2; i <= 2; i++)
	{
		results = op1 * op2;
                printf("%d\n",results);
		break;
		if (argc != 3)
		{
			printf("error\n");
		}
		return (1);
	}
	return (results);
}
