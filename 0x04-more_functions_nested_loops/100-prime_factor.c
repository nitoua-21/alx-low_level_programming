#include <stdio.h>

/**
 *main - finds and prints the largest prime factor
 *of the number 612852475143
 *
 *Return: 0 Always (Success).
 */

int main(void)
{
	unsigned long int number, i;

	number = 612852475143;
	i = 2;

	while (i < number)
	{
		if (number % i == 0)
		{
			number /= i;
			i = 2;
		}
		else
		{
			i++;
		}

	}

	printf("%lu\n", number);

	return (0);
}

