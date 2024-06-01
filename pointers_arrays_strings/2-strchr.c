#include "main.h"
/**
 *_strchr - locate a character
 *@s: checked output
 *@c: checked output
 *
 *Return: always return 0
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
