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
	unsigned int len, i = 0;
	char *new_str;

	if (str == NULL)
		return (NULL);
	len = _strlen(str);
	new_str = malloc(sizeof(char) * len + 1);

	if (new_str == NULL)
		return (NULL);
	while ((new_str[i] = str[i]) != '\0')
		++i;
	return (new_str);
}
