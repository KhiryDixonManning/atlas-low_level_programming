#include "main.h"
/**
 *_memcpy - copy memory
 *@dest: checked output
 *@src: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
