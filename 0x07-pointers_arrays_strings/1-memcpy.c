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
	int i, num = n;

	for (i = 0; i < num; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
