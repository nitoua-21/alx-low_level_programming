#include <stdio.h>
#define FILE_NAME __FILE__

/**
 *main - prints the name of the file it was compiled from.
 *
 *Return: 0 (Success).
 */
int main(void)
{
	printf("%s\n", FILE_NAME);

	return (0);
}
