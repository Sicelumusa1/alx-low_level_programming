#include "main.h"


void init_dog(struct dog *d, char *name, float age, char *owner)
{

	struct dog
	{
		char *name;
		char *owner;
		float *age;
	};

	(*d).name = name;
	(*d).owner = owner;
	(*d).age = age;
}
