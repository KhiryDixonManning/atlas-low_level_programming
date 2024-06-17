#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated memory containing concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	int len1 = 0, len2 = 0;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate length of s1 */
	while (s1[len1] != '\0')
		len1++;

	/* Calculate length of s2 */
	while (s2[len2] != '\0')
		len2++;

	result = malloc(sizeof(char) * (len1 + len2 + 1));

	if (result == NULL)
		return (NULL);

	/* Copy s1 to result */
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	/* Concatenate s2 to result */
	for (j = 0; s2[j] != '\0'; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}

