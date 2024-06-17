#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocate memory
 *@nmemb: checked output
 *@size: checked output
 *
 *Return: always return 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total);

	return (ptr);
}
