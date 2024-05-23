#include "main.h"
/**
 *_strcpy - copy a string
 *@dest: checked output
 *@src: checked output
 *
 *Return: always return 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
return (dest);
}
