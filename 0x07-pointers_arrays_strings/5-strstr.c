/**
 *_strstr - locates a substring.
 *@haystack: string to be searched
 *@needle: substring
 *
 *Return: pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, idx;

	while (*needle != '\0')
	{
		for (i = 0; haystack[i] != '\0'; i++)
		{
			if (*needle == haystack[i])
				idx = i;
			while (*needle == haystack[i])
			{
				if (*needle == '\0')
					return (haystack + idx);
				++needle;
				++i;
			}
		}
		++needle;
	}
	return (0);
}
