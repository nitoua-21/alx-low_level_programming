#include <stdio.h>

/**
 *main - Entry Point
 *
 *Decsription: prints the first 50 Fibonacci numbers
 *
 *Return: 0 Always (Success).
 */

int main(void)
{
	int i;
	long int a;
	long int b;

	a = 1;
	b = 2;


	for (i = 0; i < 50; i++)
	{
		printf("%li, %li", a, b);
		a += b;
		b += a;

		if (i < 49)
			printf(", ");

	}

	printf("\n");

	return (0);

}
