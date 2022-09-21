/**
 *is_sep - checks is a character is a word separator
 *@c: character to be checked
 *
 *return: 1 if c is a separator
 *0 if c is not.
 */
int is_sep(char c)
{
	int i;
	char *seps = " \t\n,;.!?\"(){}";

	for (i = 0; seps[i] != '\0'; i++)
	{
		if (seps[i] == c)
			return (1);
	}

	return (0);
}

/**
 *is_lower - checks if a charcter is lowercase
 *@c: character to be checked
 *
 *Return: 1 if c is lowercase
 *0 otherwise
 */
int is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

/**
 *cap_string - capitalizes all words of a string.
 *@str: string to be capitalized
 *
 *Return: pointer to str with capitalized words.
 */
char *cap_string(char *str)
{
	int i;

	/*Capitalize the first letter*/
	if (is_lower(str[0]))
		str[0] -= 32;

	/*Capitalize the rest of the letters*/
	for (i = 1; str[i] != '\0'; i++)
	{
		if (is_sep(str[i]) && is_lower(str[i + 1]) && str[i + 1] != '\0')
			str[i + 1] -= 32;
	}

	return (str);
}
