/**
 *_strcat - concatenates two strings.
 *@dest: first string
 *@src: second string
 *
 *Return: pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;

	/*Point dest to the null byte*/
	while (*dest != '\0')
	{
		dest++;
		len++;
	}

	/*Append src to dest*/
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
		++len;
	}
	/*add a terminating null byte*/
	*dest = '\0';

	return (dest - len);

}
