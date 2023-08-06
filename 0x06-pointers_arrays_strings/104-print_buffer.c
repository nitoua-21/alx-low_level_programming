#include <stdio.h>
#include <ctype.h>
/**
 *print_buffer - prints a b.
 *@b: pointer to b
 *@size: size bytes of the b to be printed.
 */
void print_buffer(char *b, int size)
{
	int offset, j, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	offset = 0;

	while (offset < size)
	{
		j = (size - offset < 10) ? (size - offset) : 10;

		printf("%08x: ", offset);

		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", b[offset + i]);
			else
				printf("  ");

			if (i % 2)
				printf(" ");
		}

		for (i = 0; i < j; i++)
		{
			char c = b[offset + i];

			printf("%c", (isprint(c))? c : '.');
		}

		printf("\n");
		offset += 10;
	}
}
