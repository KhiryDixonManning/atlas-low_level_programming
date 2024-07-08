/**
 *set_bit - sets tha value of a bit
 *@n: checked output
 *@index: checked output
 *
 *Return: always return 0
 */
int set_bit(unsigned long int *n, unsigned long int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
