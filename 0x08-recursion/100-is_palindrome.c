/**
 *str_compare - 
 */


/**
 *_str_len - finds the length of the string.
 *@s: input string
 *
 *Return: length of the string
 */
int _str_len(char *s)
{
	unsigned int i = 0;

	while (*s)
	{
		++i;
		++s;
	}
	return (i);
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
		return (1);

}
