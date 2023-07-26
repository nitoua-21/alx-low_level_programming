/**
 *reverse_array - reverses the content of an array of integers
 *@a: the array to be reversed
 *@n: the number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

