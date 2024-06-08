#include "main.h"
/**
 *_sqrt_recursion - return natural square root
 *@n: checked output
 *
 *Return: always return 0
 */
int _sqrt_recursion(int n)
{
	return (calsqrt(n, 0));
}

/**
 *calsqrt - calculate square root
 *@n: checked ouptut
 *@a: checked output
 *
 *Return: always return 0
 */

		int calsqrt(int n, int a)
	{
		if (n < 0 || a == n)
			return (-1);
		if (n == 0 || n == 1)
			return (n);
		if (a * a == n)
			return (a);
		return (calsqrt(n, a + 1));
	}
