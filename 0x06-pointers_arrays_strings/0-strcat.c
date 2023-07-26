/**
 *_strcat - concatenates two strings.
 *@dest: first string
 *@src: second string
 *
 *Return: pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	/*Point dest to the null byte*/
	while (*dest != '\0')
		dest++;

	/*Append src to dest*/
	while (*src != '\0')
	{
		*dest = *src;
		++dest;
		++src;
	}
	/*add a terminating null byte*/
	*dest = '\0';

	return (dest);

}
