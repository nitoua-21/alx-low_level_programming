/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@str: string to be changed.
 *
 *Return: str uppercased.
 */
char *string_toupper(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		++str;
		++len;
	}
	return (str - len);
}
