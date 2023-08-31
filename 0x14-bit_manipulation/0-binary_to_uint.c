#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0
 * or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, n = 0, val;

	if (b == NULL || *b == '\0')
		return (0);

	for (j = 0; b[j] != '\0'; j++)
		;
	j--;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		val = b[i] - 48;
		n += val << j--;

	}

	return (n);
}
