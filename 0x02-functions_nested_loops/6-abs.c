#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@n: the integer of interest.
 *
 *Return: absolute value of the input integer.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-1 * n);
}

