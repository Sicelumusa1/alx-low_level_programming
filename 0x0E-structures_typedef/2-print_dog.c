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
	{
		return;
	}

	if (d->name == NULL)
	{
	       printf("nil");
	}

	if (d->owner == NULL)
	{
		printf("nil");
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
