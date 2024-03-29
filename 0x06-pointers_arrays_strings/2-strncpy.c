/**
 *_strncpy - copies a string.
 *@dest: destination string
 *@src: string to be copied
 *@n: n bytes from src to be copied at most.
 *
 *Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[i] = *src;
		++src;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
