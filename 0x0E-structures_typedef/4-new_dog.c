#include <stdlib.h>
#include "dog.h"
/**
 *new_dog - creates a new dog.
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of the dog
 *
 *Return: new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a_dog;

	a_dog = malloc(sizeof(dog_t));
	if (a_dog == NULL)
		return (NULL);
	a_dog->name = name;
	a_dog->age = age;
	a_dog->owner = owner;

	return (a_dog);

}

