#include "lists.h"
/**
 *pop_listint - deletes head of node and returns the data
 *@head: checked output
 *
 *Return: always return 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
