#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - concatenate two strings
 *@s1: checked output
 *@s2: checked output
 *@n: checked output
 *
 *Return: always return 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
		unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < n; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}
