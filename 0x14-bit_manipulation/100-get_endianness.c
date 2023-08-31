/**
 * get_endianness -  checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int n = 1;
	unsigned char *byte = (unsigned char *)&n;

	return ((*byte == 1) ? 1 : 0);
}
