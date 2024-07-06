#include "lists.h"
/**
 *free_list - frees the list_t list
 *@head: checked output
 *
 *Return: always return 0
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
