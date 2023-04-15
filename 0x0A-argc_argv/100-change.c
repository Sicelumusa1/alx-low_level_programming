#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point for the program that the 
 * minimum number of coins to make change
 * @argc: number of arguments passed on a command line
 * @argv: values of the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int coin;
	int change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (*argv[1] < 0)
	{
		printf("0\n");
		return (1);
	}

	coin = atoi(argv[1]);
	while (coin > 0)
	{
		if (coin >= 25)
			coin -= 25;
		else if (coin >= 10)
			coin -= 10;
		else if (coin >= 5)
			coin -= 5;
		else if (coin >= 2)
			coin -= 2;
		else
			coin -= 1;
		change++;
	}
	printf("%d\n", change);
	return (0);
}
