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
 *count_words - counts words in a string.
 *@str: string.
 *
 *Return: number of words.
 */
unsigned int count_words(char *str)
{
	unsigned int count = 0;

	while (*str)
	{
		if (*str != ' ' && *(str - 1) == ' ')
			count++;
		++str;
	}
	return (count);
}

/**
 *strtow -  splits a string into words.
 *@str: string.
 *
 *Return: pointer to an array of strings (words).
 *
 */
char **strtow(char *str)
{
	unsigned int len = 0, wc = 0;
	char **words;

	if (str == NULL || *str =='\0')
		return (NULL);
	wc = coun_words(str);
	words = malloc(size(char *) * wc);
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			j = 0;
			while (*(str + 1) != ' ' || *str)
				++j, ++str;
			words[j] = malloc(sizeof(char) * j + 1);
			if (words[j] == NULL)
			{

			}

		}
	}
}
