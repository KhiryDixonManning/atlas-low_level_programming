#include "lists.h"
/**
 *get_nodeint_at_index - returns node of list
 *@head: checked output
 *@index: checked output
 *
 *Return: always return 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	return (current);
}
