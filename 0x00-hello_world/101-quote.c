#include <unistd.h>

/**
 * main- Entry point for the program
 * Return:Always 1 on success
 */

int main(void)
	{
		const char a[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
		write(STDOUT_FILENO, a, sizeof(a) - 1);
		return (1);
	}
