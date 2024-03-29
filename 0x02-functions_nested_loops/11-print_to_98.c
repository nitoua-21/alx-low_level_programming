#include <stdio.h>

/**
 *print_to_98 - prints all natural numbers from n to 98.
 *@n: the first number to be printed
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	}
	else
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	}
	printf("%d\n", 98);
}
