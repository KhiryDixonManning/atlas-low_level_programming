#include "lists.h"
/**
 *free_listint - frees the list
 *@head: checked output
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
}
