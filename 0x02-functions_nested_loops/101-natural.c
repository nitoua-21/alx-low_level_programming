#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: computes and prints the sum of multiples of 3 and 5.
 *
 *Return: 0 Always (Success).
 */

int main(void)
{
	int i;
	int sum;

	sum = 0;

	for (i = 3; i < 1024 ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
