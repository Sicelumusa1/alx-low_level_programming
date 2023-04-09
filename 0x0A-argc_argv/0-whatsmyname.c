#include <stdio.h>

/**
 * main-Entry point for the program that prints its file name
 * @argc:command line argument count
 * @argv: command line arguments values
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("mynameis %s\n", argv[0]);
	return (0);
}
