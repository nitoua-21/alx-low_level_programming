#include <stdlib.h>
/**
 *array_range - creates an array of integers.
 *from min (included) to max (included)
 *@min: minimum
 *@max: maximum
 *
 *Return:  pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (min <= max)
		arr[i++] = min++;
	return (arr);
}
