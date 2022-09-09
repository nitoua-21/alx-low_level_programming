#include <stdio.h>

/**
 *main - Main Entry
 *
 *Description: prints all the numbers of base 16 in lowercase
 *starting from 0, followed by a new line.
 *Return: 0 always
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
