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

	while (*accept != '\0')
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			if (*accept == s[i])
			{
				if (len < i + 1)
					len = i + 1;
				break;
			}

		}
		++accept;
	}
	return (len);
}
