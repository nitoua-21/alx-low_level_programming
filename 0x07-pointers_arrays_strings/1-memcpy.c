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
	if (n > 0)
	{
		unsigned int i;
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}
	return (dest);
}
