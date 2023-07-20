#include <stdio.h>

/**
 *main - finds and prints the largest prime factor
 *of the number 612852475143
 *
 *Return: 0 Always (Success).
 */

int main(void)
{
	unsigned long number, i;

	number = 612852475143;
	i = 2;

	while (i < number / 2)
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

	return (0);
}

