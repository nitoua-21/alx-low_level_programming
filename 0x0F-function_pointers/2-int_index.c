/**
 *int_index - searches for an integer.
 *@array: array of integers
 *@size: number of elements in the array
 *@cmp: function to be used to compare values
 *
 *Return: the index of the first element for which
 *the cmp function does not return 0
 *If no element matches, return -1
 *If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || size <= 0 || !cmp)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
