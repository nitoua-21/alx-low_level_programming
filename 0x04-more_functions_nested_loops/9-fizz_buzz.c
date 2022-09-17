#include <stdio.h>

/**
 *main - prints numbers fron 1 to 100,
 *implements FizzBuzz test
 *
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("Fizzbuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%d", n);

		if (n < 100)
			printf(" ");
	}
	printf("\n");


	return (0);
}
