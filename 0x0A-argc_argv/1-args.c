#include <stdio.h>

/**
 * main-Entry point for the program that print the number
 * of arguments  passed to it
 * @argc: number of arguments passed on a command line
 * @argv: command line arguments values
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
