#include "search_algos.h"

/**
* print_range - helper function to print the range being searched
* @low: starting index of the range
* @high: ending index of the range
*/
void print_range(size_t low, size_t high)
{
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
}

/**
* print_array - helper function to print the array being searched
* @array: pointer to the array
* @low: starting index of the array
* @high: ending index of the array
*/
void print_array(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array:");
	for (i = low; i <= high; ++i)
	{
		printf(" %d", array[i]);
		if (i < high)
			printf(",");
	}
	printf("\n");
}

/**
* exponential_search - searches for a value in a sorted array of integers
* using the Exponential search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located, or -1 if not found or array is NULL
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t low, high, i;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = bound < size ? bound : size - 1;

	print_range(low, high);
	print_array(array, low, high);

	while (low <= high)
	{
		size_t mid = low + (high - low) / 2;

		printf("Searching in array:");
		for (i = low; i <= high; ++i)
		{
			printf(" %d", array[i]);
			if (i < high)
				printf(",");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
