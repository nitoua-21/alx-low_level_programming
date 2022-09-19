/**
 *_strlen - returns the length of string.
 *@s: string variable
 *
 *Return: Length of the string s
 *
 */
int _strlen(char *s)
{
	int length = 0;


	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}


/**
 *rev_string - reverses a string.
 *@s: string to be reversed.
 *
 */
void rev_string(char *s)
{
	int i, j, length;

	char tmp[50];

	/*Find the length of the string*/
	length = _strlen(s);

	j = 0;

	for (i = length - 1; i >= 0; i--)
	{
		tmp[j] = s[i];
		j++;
	}

	tmp[length] = '\0';

	i = 0;

	while (tmp[i] != '\0')
	{
		s[i] = tmp[i];
		i++;
	}
}
