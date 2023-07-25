#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - random valid passwords for the program 101-crackme.
 * at https://github.com/alx-tools/0x04.c.
 *
 *Return: 0 Always (Success);
 */
int main(void)
{
	srand(time(NULL));
	char *valid_chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int password_length = 8;
	int random_index, i;

	for (i = 0; i < password_length; i++)
	{
		random_index = rand() % (sizeof(valid_chars) - 1);
		printf("%c", valid_chars[random_index]);
	}
	printf("\n");
	return (0);
}
