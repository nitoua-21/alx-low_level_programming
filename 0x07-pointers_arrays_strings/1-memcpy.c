/**
 *_memcpy - copies memory area.
 *@dest: memory area to copy to
 *@src: memory area to cpy from
 *n: bytes to copy
 *
 *Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (*src == '\0')
		return (dest);

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
