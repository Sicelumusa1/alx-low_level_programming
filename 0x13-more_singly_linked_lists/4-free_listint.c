#include "lists.h"

/**
 * free_listint - frees memory used by listint_t
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
