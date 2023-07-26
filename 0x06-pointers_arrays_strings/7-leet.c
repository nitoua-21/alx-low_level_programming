/**
 *leet - encodes a string into 1337.
 *@str: string to be encoded.
 *
 *Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;

	char *letters = "aAeEoOtTlL";
	char *nums = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = nums[j];
				break;
			}
		}
	}

	return (str);
}
