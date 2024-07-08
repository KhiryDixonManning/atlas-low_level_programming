/**
 *flip_bits - returns the number of bits needed to flip
 *@n: checked output
 *@m: checked output
 *
 *Return: always return 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
