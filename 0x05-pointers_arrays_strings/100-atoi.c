/**
 *_atoi - convert a string to an integer.
 *@s: string parameter
 *Return: integer
 */
int _atoi(char *s)
{
	int n;
	int sign;

	sign = 1;
	n = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		++s;
	}

	if (*(s - 1) == '-')
		sign = -1;

	while (*s >= '0' && *s <= '9')
	{
		n = n * 10 + (*s - '0');
		++s;
	}

	return (n * sign);
}
