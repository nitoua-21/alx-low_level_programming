/**
 *_memset -  fills memory with a constant byte.
 *@s: ponter to memory area
 *@b: constant byte
 *@n: number of bytes to be filled
 *
 *Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			s[i] = b;
	}
	return (s);
}
