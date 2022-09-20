
/**
 *_strlen - returns the length of string.
 *@s: string variable
 *
 *Return: Length of the string s
 *
 */
int _strlen(char *s)
{
	int length = 0;


	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}


/**
 *_strcpy - copies the string pointed to by src,
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest.
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int n, i;

	/* Get the length of the src araay*/
	n = _strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[n - 1] = '\0';

	return (dest);



}

