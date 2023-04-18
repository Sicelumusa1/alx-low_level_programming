#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to a block of memory of struct dog
 * @name: dogs' name
 * @age: dogs' age
 * @owner: dogs' owner
 * Return: none
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int len_name = 0, len_owner = 0;

	while (*name != '\0')
	{
		name++;
		len_name++;
	}

	while (*owner != '\0')
	{
		owner++;
		len_owner++;
	}

	(*d).name = malloc(len_name + 1);

	while (*name != '\0')
	{
		*((*d).name) = *name;
		(*d).name++;
		name++;
	}

	(*d).owner = malloc(len_owner + 1);

	while (*owner != '\0')
	{
		*((*d).owner) = *owner;
		(*d).owner++;
		owner++;
	}

	(*d).age = age;
}
