/**
 *get_root - finds the root of a number.
 *@n: number
 *@root: root to test
 *
 *Return: natural square root of n,
 *-1 otherwise.
 */
int get_root(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root *  root == n)
		return (root);
	return (get_root(n, root + 1));
}

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number
 *
 *Return: natural square root of number.
 *-1 if  n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	return (get_root(n, 0));
}
