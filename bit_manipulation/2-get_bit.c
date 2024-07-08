/**
 *get_bit - Returns the value of a bit
 *@n: checked output
 *@index: checked output
 *
 *Return: always return 0
 */
int get_bit(unsigned long int n, unsigned long int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
