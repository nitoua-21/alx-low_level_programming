#include <stdio.h>

/**
 * main - Entry point
 *
 *Description: prints the string to the standard error
 * Return: Always 0 (Success)
 */
int main(void)
{
	char quote_part1[50] = "and that piece of art is useful\"";

	char quote_part2[50] = " - Dora Korpar, 2015-10-19\n";

	fputs(quote_part1, stderr);
	fputs(quote_part2, stderr);

	return (1);
}
