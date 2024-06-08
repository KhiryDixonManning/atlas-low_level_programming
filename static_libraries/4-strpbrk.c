#include "main.h"
/**
 *_strpbrk - searches for a string of bytes
 *@s: checked output
 *@accept: checked output
 *
 *Return: always return 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
