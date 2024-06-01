#include "main.h"
/**
 *reverse_array - reverse content
 *@a: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = a[i];

	for(i = 0; i < n / 2; i++)
	{
		a[i] = a[n - 1 - i];
			a[n - 1 - i] = temp;
	}
	   
}
