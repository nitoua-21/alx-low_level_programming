#include <stdlib.h>

/**
 *_calloc - allocates memory for an array
 *of 'nmemb' elements of size bytes each.
 *@nmemb: array size
 *@size: size of each element.
 *
 *Return: pointer to the allocated memory,
 *NULL if 'nmemb' or 'size' is 0 or if 'malloc' fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	byte_ptr = (unsigned char *)arr;

	for (i = 0; i < nmemb; i++)
		byte_ptr[i] = (unsigned char)0;
	return (arr);
}
