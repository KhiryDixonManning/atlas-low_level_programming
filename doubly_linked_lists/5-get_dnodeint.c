#include "lists.h"
/**
 *get_dnodeint_at_index - returns a node from the list
 *@head: checked output
 *@index: checked output
 *
 *Return: always return 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
	head = head->next;

return (head);
}
