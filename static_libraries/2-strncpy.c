#include "main.h"
/**
 *_strncpy - copy a string
 *@dest: checked output
 *@src: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] != '\0' && i != n; i++)
	{
		dest[i] = src[i];
	}

	while (i != n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
