#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct dt - structure
 * @c: char representing data type
 * @func: function pointer
 */
typedef struct dt
{
	char c;
	void (*func)(va_list);
} dtype;

#endif
