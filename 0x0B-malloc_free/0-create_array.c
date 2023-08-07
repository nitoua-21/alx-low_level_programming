#include <stdlib.h>
/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char.
 *@size: size of the array
 *@c: char
 *
 *Return: pointer to array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	if (size == 0)
		return (NULL);

	str = malloc(size);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
