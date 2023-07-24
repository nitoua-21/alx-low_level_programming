
/**
 *swap_int - swaps the values of two integers
 *@a: first integer variable
 *@b: second integer variable
 *
 */
void swap_int(int *a, int *b)
{
	int temp;

	/*Copy value of a to temp */
	temp = *a;

	/*Set a to b*/
	*a = *b;

	/*Set b to a*/
	*b = temp;
}

