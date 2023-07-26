/**
 *cap_string - capitalizes all words of a string.
 *@str: string to be changed.
 *
 *Return: str uppercased.
 */
char *cap_string(char *str)
{
	int i, j;
	char *seps = "\n\t ,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; seps[j] != '\0'; j++)
			{
				if (i == 0 || str[i - 1] == seps[j])
				{
					str[i] -= 32;
					break;
				}
			}
		}
	}


	return (str);
}
