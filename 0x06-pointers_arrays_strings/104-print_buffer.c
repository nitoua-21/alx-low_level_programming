/**
 *print_buffer - prints a buffer.
 *@b: pointer to buffer
 *@size: size bytes of the buffer to be printed.
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", (unsigned char)b[j]);
			else
				printf("  ");

			if (j % 2)
				printf(" ");

			if (j == size - 1)
			{
				for (int k = 0; k < 10 - (size % 10); k++)
				{
					printf("  ");
					if (k % 2)
						printf(" ");
				}
			}
		}

		printf(" ");
		for (j = i; j < i + 10 && j < size; j++)
		{
			if (b[j] >= 32 && b[j] <= 126)
				printf("%c", b[j]);
			else
				printf(".");
		}

		printf("\n");
	}
}
