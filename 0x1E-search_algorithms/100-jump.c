#include "search_algos.h"
/**
* jump_search - Searches for a value in a sorted array of integers
* using the Jump search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in array
* @value: Value to search for
*
* Return: The first index where value is located, or -1 if value is not present
* in array or if array is NULL
*/
int jump_search(int *array, size_t size, int value)
{
	size_t jump, step;
	size_t prev = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	jump = (size_t)sqrt(size);
	step = jump;

	while (step < size && array[step] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		prev = step;
		step += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, step);

	for (i = prev; i < size && i <= step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
