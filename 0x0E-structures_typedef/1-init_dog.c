#include "dog.h"

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

	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
}
