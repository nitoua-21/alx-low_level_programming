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
	int i, j;
	char tmp;

	/*Find the length of the string*/
	j = _strlen(s) - 1;
	i = 0;

	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

