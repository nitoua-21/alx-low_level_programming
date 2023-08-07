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
 *argstostr - concatenates all the arguments of the program.
 *@ac: argument count
 *@av: argument vector
 *
 *Return: pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	unsigned int len = 0;
	int i, j;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;
	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac ; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			++str;
		}
		*str = '\n';
		++str;
	}
	*str = '\0';

	return (str - len);
}
