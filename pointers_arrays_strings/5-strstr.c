#include "main.h"
/**
 *_strstr - locate substring
 *@haystack: checked output
 *@needle: checked output
 *
 *Return: always return 0
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *p = haystack;
		char *s = needle;

		while (*p == *s && *s != '\0')
		{
		p++;
		s++;
		}
		if (*s == '\0')
			return (haystack);
	}
	return ('\0');
		}
