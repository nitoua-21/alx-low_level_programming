/***
 *rot13 - encodes a string using rot13.
 *@str: string to be encoded
 *
 *Return: pointer to str
 *
 */
char *rot13(char *str)
{
	int i, j;

	char *list1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *list2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; list1[j] != '\0'; j++)
		{
			if (str[i] == list1[j])
			{
				str[i] = list2[j];
				break;
			}
		}
	}

	return (str);
}
