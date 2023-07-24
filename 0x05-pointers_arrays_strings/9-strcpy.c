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
	int i;

	i = 0;
	while ((dest[i] = src[i]) != '\0')
		i++;

	return (dest);
}
