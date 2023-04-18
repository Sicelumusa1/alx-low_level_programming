#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog
 * @name: dogs' name
 * @age: dogs' age
 * @owner: dogs' owner
 * Return: pointer to new dog, or NULL on failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy;
	char *owner_copy;
	int len_name;
	int len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	while (*name != '\0')
	{
		name++;
		len_name++;
	}

	name_copy = malloc(sizeof(char) * (len_name + 1));
	if (name_copy == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(name_copy, name);

	while (*owner != '\0')
	{
		owner++;
		len_owner++;
	}

	owner_copy = malloc(sizeof(char) * (len_owner + 1));
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(new_dog);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
