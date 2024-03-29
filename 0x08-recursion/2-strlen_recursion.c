/**
 *_strlen_recursion - returns the length of a string recursively.
 *@s: string input
 *
 *Return: length of the length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
