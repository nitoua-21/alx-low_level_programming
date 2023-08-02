/**
 *str_compare -compares the start and end of a string.
 *@start: start of string
 *@end: end of string
 *Return: 1 if start and end are equal and 0 otherwise.
 *
 */
int str_compare(char *start, char *end)
{
	if (start >= end)
		return (1);
	else if (*start != *end)
		return (0);
	return (str_compare(++start, --end));
}


/**
 *_str_len - finds the length of the string.
 *@s: input string
 *
 *Return: length of the string
 */
unsigned int _str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _str_len(s + 1));
}

/**
 *is_palindrome - checjs for palindrome .
 *@s: string to be checked.
 *
 *Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		unsigned int len = _str_len(s);

		return (str_compare(s, s + len - 1));
	}
}
