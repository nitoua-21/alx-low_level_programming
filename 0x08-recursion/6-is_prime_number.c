/**
 *is_divisible - checks for divisibility of n,
 *by all numbers up to n / 2 starting at 3.
 *@n: number,
 *@div: divider
 *Return: 0 if n is divisible, 1 otherwise.
 */
int is_divisible(int n, int div)
{
	if (div >  n / 2)
		return (1);
	else if (n % div == 0)
		return (0);
	return (is_divisible(n, div + 1));
}

/**
 *is_prime_number - Checks for prime number
 *@n: number
 *
 *Return: 1 if n is prime,
 *otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);
	else if (n == 2)
		return (1);
	return (is_divisible(n, 2));
}
