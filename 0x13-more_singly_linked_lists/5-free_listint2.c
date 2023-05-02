#include "lists.h"

/**
 * free_listint2 - frees memory used by listint_t
 * @head: pointer to pointer containing address of first node
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}

	*head = NULL;
}


