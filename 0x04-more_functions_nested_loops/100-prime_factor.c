#include <stdio.h>

/**
 *isprime - Checks if a number is prime
 *@n: the number to be checked
 *
 *Return: 1 if the number is prime,
 *0 otherwise
 */
int isprime(long int n)
{
	long int i;

	for (i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}


/**
 *main - finds and prints the largest prime factor
 *of the number 612852475143
 *
 */

int main(void)
{
	long int number, i;

	number = 612852475143;

	for (i = number / 2; i > 1; i--)
	{
		if (number % i == 0 && isprime(i))
		{
			printf("%ld\n", i);
			break;
		}
	}

	return (0);
}

