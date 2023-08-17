#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: count of numbers to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (!separator || i == n - 1)
				continue;
			printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
