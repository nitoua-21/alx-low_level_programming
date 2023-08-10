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
 *string_nconcat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *@n: bytes from s2 to be copies
 *
 *Return: concatenated string or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, len_s1, len_s2, i = 0, j;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);
	len_s2 = n >= len_s2 ? len_s2 : n;
	len = len_s1 + len_s2;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	while ((str[i] = *s1) != '\0')
		++i, ++s1;
	for (j = 0; j < len_s2; j++, i++, s2++)
		str[i] = *s2;
	str[i] = '\0';

	return (str);
}
