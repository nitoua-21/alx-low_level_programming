/**
 * flip_bits - finds the number of bits you would need to flip
 * to get from one number to another.
 * @n: number
 * @m: num
 *
 * Return: the number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		count += result & 1;
		result >>= 1;
	}

	return (count);
}
