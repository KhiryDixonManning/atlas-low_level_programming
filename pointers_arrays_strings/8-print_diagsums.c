#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - print the sum of diagonal numbers
 *@a: checked output
 *@size: checked output
 *
 *Return: always return 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;

	while (a[i] < size)
	{
		i++;
	}
		while (a[j] < size)
		{
			j++;
		}
		printf("%d + %d", i,j);
		printf("\n");
}
