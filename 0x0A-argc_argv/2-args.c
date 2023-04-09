#include <stdio.h>

/**
 * main-Entry point for the program that prints
 * all arguments it receives
 * @argc: number of arguments passed on a  command line
 * @argv: values of the the arguments passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
