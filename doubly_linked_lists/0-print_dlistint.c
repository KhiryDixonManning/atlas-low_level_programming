#include "lists.h"
/**
 *print_dlistint - prints elements of list
 *@h: checked output
 *
 *Return: always return 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
