#include "dog.h"
#include <stdlib.h>
/**
 *new_dog- function to create a new dog struct
 *@name: the name of the dog
 *@age: age of the dog
 *@owner: dog's owner
 *Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
