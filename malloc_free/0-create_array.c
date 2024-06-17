#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - create an array of chars
 *@size: checked output
 *@c: checked output
 *
 *Return: always retunr 0
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size * sizeof(char));
		unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);

}
