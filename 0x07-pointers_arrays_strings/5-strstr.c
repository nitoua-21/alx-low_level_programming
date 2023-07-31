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
	/*Return the haystack pointer if needle is an empty string*/
	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*needle == *haystack)
		{
			char *h = haystack;
			char *n = needle;

			while (*n != '\0' && *h == *n)
			{
				n++;
				h++;
			}
			if (*n == '\0')
				return (haystack);

		}
		haystack++;
	}

	return (0);
}
