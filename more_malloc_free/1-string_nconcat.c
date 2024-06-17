#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * @n: maximum number of bytes from s2 to concatenate
 *
 * Return: pointer to allocated memory containing concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 up to maximum n bytes */
	while (s2[len2] != '\0' && len2 < n)
		len2++;

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	/* Copy s1 to s */
	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	/* Append s2 to s */
	for (j = 0; j < len2; j++)
		s[i + j] = s2[j];

	s[i + j] = '\0';

	return (s);
}

