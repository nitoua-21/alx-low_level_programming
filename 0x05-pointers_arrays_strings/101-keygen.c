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
	char *valid_chars
	int random_index, i;

	valid_chars;= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (i = 0; i < 8; i++)
	{
		random_index = rand() % (sizeof(valid_chars) - 1);
		printf("%c", valid_chars[random_index]);
	}
	printf("\n");
	return (0);
}
