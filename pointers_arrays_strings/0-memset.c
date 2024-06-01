#include "main.h"
/**
 *_memset - fills memory
 *@s: checked output
 *@b: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
