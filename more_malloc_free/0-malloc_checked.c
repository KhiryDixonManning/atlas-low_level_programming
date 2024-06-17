#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - allocate memory
 *@b: checked output
 *
 *Return: always return 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
