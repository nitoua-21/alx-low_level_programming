#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints all the numbers of base 16 in lowercase.
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	char c;
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
