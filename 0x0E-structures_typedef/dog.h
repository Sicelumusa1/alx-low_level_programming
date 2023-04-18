#ifndef STRUCT_DOG_H
#define STRUCT_DOG_H

/**
 *  struct dog - structure that contains variables of different data types
 *  @name: dogs' name
 *  @owner: dogs'owner
 *  @age: dogs' age
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* STRUCT_DOG_H */
