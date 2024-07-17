#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

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
* recursive_binary - recursively searches for a value in a sorted array
* @array: pointer to the first element of the array to search in
* @low: starting index of the subarray
* @high: ending index of the subarray
* @value: value to search for
* Return: index where value is located, or -1 if not found
*/
int recursive_binary(int *array, size_t low, size_t high, int value)
{
	size_t mid = low + (high - low) / 2;

	if (low > high)
		return (-1);

	print_array(array, low, high);

	if (array[mid] == value && (mid == low || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (recursive_binary(array, low, mid, value));
	return (recursive_binary(array, mid + 1, high, value));
}

/**
* advanced_binary - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array to search in
* @size: number of elements in array
* @value: value to search for
* Return: index where value is located, or -1 if not found or array is NULL
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
