/**
 *_strcat - concatenates two strings
 *appends the src string to the dest string
 *@dest: destination string
 *@src: source string
 *
 *Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	n = 0;

	/*Get the size of dest*/
	for (i = 0; dest[i] != '\0'; i++)
		n++;

	/*Append src to dest*/
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}

	dest[n + i] = '\0';

	return (dest);
}
