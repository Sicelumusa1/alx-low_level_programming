#include "lists.h"
/**
 * free_dlistint - free the doubly linked
 * @head: pointer to the first node of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *link;

	while (current != NULL)
	{
		link = current->next;
		free(current);
		current = link;
	}
}
