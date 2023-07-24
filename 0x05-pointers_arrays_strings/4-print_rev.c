#include "main.h"

/**
 *_strlen - returns the length of string.
 *@s: string variable
 *
 *Return: Length of the string s
 *
 */
int _strlen(char *s)
{
	int length = 0;


	while (*(s + length) != '\0')
	{
		length++;
	}

	return (length);
}


/**
 *print_rev - prints a string, in reverse, followed by new line.
 *@s: string to be printed in reverse.
 *
 */
void print_rev(char *s)
{
	int i, length;

	/* Find the length of the string*/
	length = _strlen(s);

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

