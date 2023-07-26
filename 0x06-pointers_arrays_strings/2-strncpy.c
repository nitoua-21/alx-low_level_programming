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

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
		{
			dest[i] = '\0';
			return (dest);
		}
		dest[i] = *src;
		++src;
	}

	return (dest);

}
