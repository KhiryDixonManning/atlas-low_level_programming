#include "lists.h"
/**
 *listint_len - return number of elements in list
 *@h: checked output
 *
 *Return: always return 0
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}