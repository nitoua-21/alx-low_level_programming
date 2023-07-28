/**
 *infinite_add -  adds two numbers.
 *@n1: first number
 *@n2: second number
 *@r: buffer to store the result
 *@size_r: size of the buffer
 *
 *Return: pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int s1 = 0;
	int s2 = 0;
	int car = 0;
	int op1, op2, i, j, tmp, idx = 0;

	while (n1[s1] != '\0')
		++s1;
	while (n2[s2] != '\0')
		++s2;
	if (size_r < s1 || size_r < s2)
		return (0);

	for (i = s1 - 1, j = s2 - 1; i >= 0 || j >= 0 || car; i--, j--)
	{
		op1 = (i >= 0) ?  n1[i] - '0' : 0;
		op2 = (j >= 0) ? n2[j] - '0' : 0;
		tmp = op1 + op2 + car;
		car = tmp / 10;
		if (idx >= size_r - 1)
			return (0);
		r[idx++] = (tmp % 10) + '0';
	}

	for (i = 0, j = idx - 1; i < j; i++, j--)
	{
		char c = r[i];

		r[i] = r[j];
		r[j] = c;
	}
	r[idx] = '\0';

	return (r);
}
