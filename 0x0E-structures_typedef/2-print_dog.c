#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to a block of memory of struct dog
 * Return: none
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;


	if (d->name == NULL)
	{
		printf("nil");
	}
	printf("Name: %s\n", d->name);

	prinf("Age: %f\n", d->age);

	if (d->owner == NULL)
	{
		printf("nil");
	}
	printf("Owner: %s\n", d->owner);
}
