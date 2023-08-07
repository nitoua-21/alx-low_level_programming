#include <stdlib.h>
/**
 *_strlen - evaluate the length of a string.
 *@str: string
 *
 *Return: Length of s.
 */
unsigned int _strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + _strlen(++str));
}

/**
 *str_concat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *
 *Return: concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len, i = 0;
	char *str;

	len = _strlen(s1) + _strlen(s2);

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	while ((str[i] = *s1) != '\0')
		i++, s1++;
	while ((str[i] = *s2) != '\0')
		i++, s2++;
	str[i] = '\0';

	return (str);
}
