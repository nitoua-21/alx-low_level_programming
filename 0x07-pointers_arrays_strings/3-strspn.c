/**
 *_strspn - gets the length of a prefix substring.
 *@s: main string
 *@accept: substring
 *
 *Return: number of bytes in the initial segment of s
 *which consist only of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, len = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
			{
				len++;
				break;
			}

		}
		if (accept[i] == '\0')
			return (len);
		++s;
	}
	return (len);
}
