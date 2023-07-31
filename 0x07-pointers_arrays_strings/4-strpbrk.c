/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: string to be searched
 *@accept: string to search
 *
 *Return:  pointer to the byte in s that matches one of the bytes in accept,
 *or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}

		}
		s++;
	}
	return (0);
}
