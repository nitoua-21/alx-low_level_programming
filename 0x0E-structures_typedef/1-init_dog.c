#include "dog.h"
/**
 *init_dog - Initializes a variable of type struct dog
 *@d: pointer to dog object
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
