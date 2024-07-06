#include "lists.h"
/**
 *sum_listint - return the sum of the list
 *@head: checked output
 *
 *Return: always return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
