#include "lists.h"

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to pointer storing address of first node
 * Return: new head node data or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	node_to_delete = *head;
	*head = (*head)->next;
	free(node_to_delete);

	return ((*head)->n);

}

