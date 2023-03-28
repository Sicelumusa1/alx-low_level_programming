#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main-Entry point for the program
 * the program generates random valid passwords for the program 101-crackme
 * Return: 0
 */

int main(void)
{
	int password[100];
	int i, j;
	int sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');

		if ((2772 - sum) - '0' < 78)
		{
			j = 2772 -sum - '0';
			sum += j;
			putchar(j + '0');
			break;
		}
	}
	return (0);
}

