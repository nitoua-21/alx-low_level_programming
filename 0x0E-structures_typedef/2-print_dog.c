#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog
 *@d: struct dog
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		char *name = (d->name == NULL) ? "(nil)" : d->name;
		char *owner = (d->owner == NULL) ? "(nil)" : d->owner;

		printf("Name: %s\n", name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", owner);
	}
}
