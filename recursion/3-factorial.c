#include "main.h"
/**
 *factorial - factorial of a number
 *@n: checked output
 *
 *Return: always return 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
