#include <stddef.h>
/**
 *array_iterator - executes a function given as a parameter
 *on each element of an array.
 *@array: array
 *@size: size of the array
 *@action: function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (size == 0 || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
