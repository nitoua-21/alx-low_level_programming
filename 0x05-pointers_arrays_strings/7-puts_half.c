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
 *puts_half - prints half of a string
 *@str : string to be printed
 *
 */
void puts_half(char *str)
{
	int i, length;

	/*Get length of the str*/
	length = _strlen(str);

	i = length % 2 == 0 ? length / 2 : (length + 1) / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;

	}
	_putchar('\n');
}

