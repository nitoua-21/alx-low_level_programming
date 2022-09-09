#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: prints the alphabet in lowercase,
 *followed by a new line.
 *Prints all the letters except q and e
 *Return: Always 0.
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
