#include "main.h"

/**
 *puts2 - prints every other character of a string.
 *@str: string to be printed
 *
 */
void puts2(char *str)
{
	int i = 0;

	do {
		_putchar(str[i]);
		i += 2;

	} while (str[i] != '\0');

	_putchar('\n');
}

