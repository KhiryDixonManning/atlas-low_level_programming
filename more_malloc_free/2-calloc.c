#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	/* Initialize memory to zero */
	for (i = 0; i < total; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
