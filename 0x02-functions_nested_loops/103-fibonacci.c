#include <stdio.h>

/**
 *main - Entry Point
 *
 *Decsription:  prints the sum of the even-valued terms of Fibonacci numbers
 *
 *Return: 0 Always (Success).
 */

int main(void)
{
	long int a;
	long int b;
	long int sum;

	a = 1;
	b = 2;
	sum = 0;


	while (b <= 4000000)
	{
		a += b;
		b += a;

		if ((a % 2) == 0)
			sum += a;
		if ((b % 2) == 0)
			sum += b;
	}

	printf("%li\n", sum);

	return (0);

}
