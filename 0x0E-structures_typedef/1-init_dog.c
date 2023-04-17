#include "dog.h"

/**
 * init_dog - function to set dog values
 * @d: struct to init
 * @name: the dog's name
 * @age: the age of the dog
 * @owner: the dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
