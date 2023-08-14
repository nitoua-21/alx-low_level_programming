#include <stdlib.h>
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
	d = malloc(sizeof(struct dog));
	if (!d)
		exit(1);
	d->name = name;
	d->age = age;
	d->owner = owner;
}
