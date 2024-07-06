#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"
/**
 *print_list - print all elements of a list
 *@h: checked output
 *
 *Return: always return 0
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
				else
					   printf("[%u] %s\n", h->len, h->str);
				   count++;
				   h = h->next;
	}
	return (count);
}
