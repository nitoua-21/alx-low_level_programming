#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a character
 * @args: args
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an integer
 * @args: args
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: args
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}


/**
 * print_string - prints a string
 * @args: args
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all -  prints anything.
 * @format: list of types of arguments.
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *sep = "";
	int i, j = 0;

	dtype ops[] = {{'c', print_char},
			{'i', print_int},
			{'f', print_float},
			{'s', print_string},
			{'\0', NULL}};

	va_start(args, format);
	while (format && format[j])
	{
		i = 0;
		while (ops[i].c)
		{
			if (ops[i].c == format[j])
			{
				printf("%s", sep);
				ops[i].func(args);
				sep = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(args);
	printf("\n");
}
