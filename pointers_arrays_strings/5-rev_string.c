#include "main.h"
/**
 *rev_string - reverse string
 *@s: checked output
 *
 *Return: always return 0
 */
void rev_string(char *s)
{
int k = 0;
int len = 0;
	char swap;

	while (s[len] != '\0')
	{
		len++;
	}
	len--;
	for (; k <= len; k++, len--)
	{
		swap = s[len];
		s[len] = s[k];
		s[k] = swap;
	}
}
