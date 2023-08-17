#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: prints the opcodes of its own main function.
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	int (*main_ptr)(int, char**) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		unsigned char opcode = *(unsigned char *)main_ptr;

		printf("%02x", opcode);

		if (i == num_bytes - 1)
			continue;
		printf(" ");
		main_ptr++;
	}
	printf("\n");

	return (0);
}
