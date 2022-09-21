/**
 *_strncpy - copies the string pointed to by src
 *including the null byte (\0) to the buffer pointed to by dest.
 *@dest: destination string
 *@src: source string
 *@n: n most bytes to be copied from src
 *
 *Return: pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
