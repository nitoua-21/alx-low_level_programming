#include <stdlib.h>
/**
 *_strdup - returns a pointer to a new string
 *which is a duplicate of the string str
 *@str: string
 *
 *Return: pointer to the duplicated string, or NULL
 *
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(sizeof(*str));

	if (new_str == NULL)
		return (NULL);
	while ((new_str[i] = str[i]) != '\0')
		++i;
	return (new_str);
}
