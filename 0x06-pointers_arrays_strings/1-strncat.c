/**
 *_strcat - concatenates two strings.
 *@dest: first string
 *@src: second string
 *@n: n bytes from src to be used at most.
 *
 *Return: pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	/*Point dest to the null byte*/
	while (*dest != '\0')
	{
		dest++;
		len++;
	}

	/*Append src to dest*/
	while (*src != '\0' && i < n)
	{
		*dest = *src;
		++dest;
		++src;
		++len;
		++i;
	}
	/*add a terminating null byte*/
	*dest = '\0';

	return (dest - len);

}
