#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 *_isdigit - Checks for a digit (0 through 9).
 *@c: character to be checked
 *
 *Return: 1 if c is a digit, 0 otherwise.
 *
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

/**
 *_puts - prints a string, followed by a new line to stdout.
 *@str : string variable to printed
 *
 */

void _puts(char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

/**
 *isnumber - Checks if str contains only digits
 *@str: string to be checked
 *
 *Return: 1 if str contains only digits,
 *returns 0 otherwise
 */
int isnumber(char *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!_isdigit(str[i]))
			return (0);
	}
	return (1);
}

/**
 *main - multiplies two numbers.
 *@argc: arguments count
 *@argv: arguments vector
 *
 *Return: 0 Always (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		_puts("Error");
		exit(98);
	}
	else
	{
		char *num1 = argv[1];
		char *num2 = argv[2];

		if (!isnumber(num1) || !isnumber(num2))
		{
			_puts("Error");
			exit(98);
		}


	}
	
	return (0);
}
