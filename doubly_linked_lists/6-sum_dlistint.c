#include "lists.h"
/**
 *sum_dlistint - return the sum of all data in a list
 *@head: checked output
 *
 *Return: always return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
