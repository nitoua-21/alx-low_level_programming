/**
 *_atoi - convert a string to an integer.
 *@s: string parameter
 *Return: integer
 */
int _atoi(char *s)
{
	unsigned int n = 0;
	int sign = 1;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			n = n * 10 + (*s - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (found_digit ? n * sign : 0);
}

