#include <stdio.h>
/**
 * _pow - Evaluates x raised to power y.
 * @x: x
 * @y: y
 * Return: x raised to power y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

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
	unsigned int i = 0, j = 0, n = 0;

	if (b == NULL || *b == '\0')
		return (0);

	for (j = 0; b[j] != '\0'; j++)
		;
	j--;

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' &&  b[i] != '1')
			return (0);
		n += (b[i] - 48) * _pow(2, j--);

	}

	return (n);
}
