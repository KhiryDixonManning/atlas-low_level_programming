#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: the input string to duplicate
 *
 * Return: pointer to the duplicated string or NULL if memory allocation fails
 */
char *_strdup(char *str)
{
    char *dup;
    size_t len = 0;

    if (str == NULL)
    {
        return (NULL);
    }

    // Calculate the length of the input string
    while (str[len] != '\0')
    {
        len++;
    }

    // Allocate memory for the duplicate string
    dup = malloc(len + 1);

    if (dup == NULL)
    {
        return (NULL);
    }

    // Copy the string into the newly allocated memory
    for (size_t i = 0; i <= len; i++)
    {
        dup[i] = str[i];
    }

    return (dup);
}

