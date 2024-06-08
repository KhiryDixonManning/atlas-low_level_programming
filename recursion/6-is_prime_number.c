#include "main.h"
/**
 *is_prime_number - check for prime
 *@n: checked output
 *@i: checked output
 *
 *Return: always return 0
 */
int is_prime_number(int n, int i)
{

	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return (is_prime_number(n, i + 1));
}
