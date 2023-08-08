#include <stdlib.h>
#include <stdio.h>
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
		if (*str != ' ' && (*(str + 1) == ' ' || *(str + 1) == '\0'))
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
	unsigned int len = 0, wc = 0, r = 0, i = 0, j;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	wc = count_words(str);

	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL); 

	while (str[i] != '\0')
	{

		if (str[i] != ' ')
		{
			len = 0;
			while (str[i + len] != ' ' && str[i + len] != '\0')
				++len;
			words[r] = malloc(sizeof(char) * (len + 1));
			if (words[r] == NULL)
			{
				for (j = 0; j < r; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[r][j] = str[i + j];
			words[r][j] = '\0';
			r++;
			i += len;
		}
		else
			i++;
	}
	words[r] = NULL;
	return (words);
}
