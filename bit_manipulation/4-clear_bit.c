/**
 *clear_bit - sets value of bit to 0
 *@n: checked output
 *@index: checked output
 *
 *Return: always return 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
