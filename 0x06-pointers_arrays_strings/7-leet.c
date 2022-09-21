/**
 *leet - encodes a string into 1337.
 *@str: string to be encoded
 *
 *Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;

	char *list1 = "aAeEoOtTlL";

	char *list2 = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; list1[j] != '\0'; j++)
		{
			if (str[i] == list1[j])
				str[i] = list2[j];
		}
	}

	return (str);
}
