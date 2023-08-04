#include <stdio.h>
#include <stdlib.h>


/**
 *is_digit - checks for digits.
 *
 *@c: input character
 *
 *Return: 1 if c is a digit, 0 otherwise.
 *
 */


int is_digit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}


/**
 *main - adds positive numbers.
 *@argc: arguments count
 *@argv: arguments vector
 *
 *Return: 0 if success.
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;
	(void) argc;

	while (argv[i])
	{
		char *str = argv[i];

		while (*str)
		{
			if (!is_digit(*str))
			{
				printf("Error\n");
				return (1);
			}
			++str;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
