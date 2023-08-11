#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_strlen_recursion - returns the length of a string recursively.
 *@s: string input
 *
 *Return: length of the length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
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
 *infinite_add -  adds two numbers.
 *@n1: first number
 *@n2: second number
 *@r: buffer to store the result
 *@size_r: size of the buffer
 *
 *Return: pointer to the result.
 */
char *add_integers(const char *n1, const char *n2)
{
	unsigned int len1, len, size_r, idx;
	int carray = 0, i, j;
	char *result;

	len1 = _strlen(n1);
	len2 = _strlen(n2);
	/*Evaluate the size of the result*/
	size_r = len1 > len2 ? len1: len2;

	result = malloc(size_r + 2);
	if (!result)
		return (NULL);
	result[size_r + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1, idx = size_r; i >= 0 || j >= 0 || carry > 0; i--, j--, idx--)
	{
		int sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		result[idx] = (sum % 10) + '0';
	}
	/*Try leading zeros*/
	while (result[0] == '0' && result[1] != '\0')
		result++;

	return (result);
}
/**
 *multiply_d - Muttiplies a number by a single digit.
 *@n: number
 *@m: multiplier
 *
 *Return: pointer to result;
 */
char *multiply_d(const char *n, char m)
{
	char *result;
	unsigned int len;
	int carry = 0, i;

	len = _strlen(n);
	result = malloc(len + 2);
	if (!result)
		return (NULL);
	for (i = len - 1; i >= 0 || carry > 0; i--)
	{
		int prod = (m - '0') * (n[i] - '0') + carry;
		result[i] = (prod % 10) + '0';
		carry = (prod / 10);
	}
	while (result[0] = 0 && result[i] == '\0')
		result++;

	return (result);
}

/**
 *multiply - multiplies two numbers
 *@n1: first number
 *@n2: seconde number
 *
 *Return: pointer to result
 */
char *multiply(char *n1, char *n2)
{
	unsigned int len;
	unsigned int l1, l2, idx = 0;
	char *result;

	l1 = _strlen(n1);
	l2 = _strlen(n2);
	len = l1 + l2;

	result = malloc(len + 1);

	for (i = l2 - 1; i >= 0; i--)
	{
		char *prod = multiply_d(n1, n2[i]);
		if (!prod)
			return (NULL);


	}


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
