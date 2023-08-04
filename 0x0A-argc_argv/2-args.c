#include <stdio.h>

/**
 *main - prints all arguments it receives.
 *@argc: arguments count
 *@argv: arguments vector
 *
 *Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	while (*argv)
		printf("%s\n", *argv++);

	return (0);
}
