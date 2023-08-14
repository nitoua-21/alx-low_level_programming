#include <stdlib.h>
#include "dog.h"
/**
 *_strlen - returns the length of a string.
 *@s: string input
 *
 *Return: length of the length.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 *_strcpy - copies the string pointed to by src,
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest.
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		i++;

	return (dest);
}

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
	char *name_cp;
	char *owner_cp;

	a_dog = malloc(sizeof(dog_t));
	if (a_dog == NULL)
		return (NULL);

	if (name)
	{
		name_cp = malloc(_strlen(name) + 1);

		if (!name_cp)
		{
			free(a_dog);
			return (NULL);
		}
		a_dog->name = _strcpy(name_cp, name);
	}
	if (owner)
	{
		owner_cp = malloc(_strlen(owner) + 1);

		if (!owner_cp)
		{
			free(name_cp);
			free(a_dog);
			return (NULL);
		}
	}
	a_dog->age = age;

	return (a_dog);
}
