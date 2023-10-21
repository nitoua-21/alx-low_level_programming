#include <stdio.h>

/**
 * add - adds two integers
 * @a: integer
 * @b: integer
 *
 * Return: sum of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substracts two integers
 * @a: integer
 * @b: integer
 *
 * Return: a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - mutiplies two integers
 * @a: integer
 * @b: integer
 *
 * Return: a *  b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers
 * @a: integer
 * @b: integer
 *
 * Return: a / b
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error: Division by zero!\n");
	return (0);
}

/**
 * mod - modulo of  two integers
 * @a: integer
 * @b: integer
 *
 * Return: a mod b
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("Error: Modulo by zero!\n");
	return (0);
}
