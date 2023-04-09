#include <stdio.h>

/**
 * main-Entry point for the program that prints its file name
 * @argc:command line argument count
 * @argv:command line arguments values
 * Return:0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
