#include <stdlib.h>
/**
 *_strlen - length of the string.
 *@str: string.
 *
 *Return: length of the string.
 */
unsigned int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(++str));
}


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
	new_str = malloc(sizeof(char) * _strlen(str));

	if (new_str == NULL)
		return (NULL);
	while ((new_str[i] = str[i]) != '\0')
		++i;
	return (new_str);
}
