#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer storing address of first node of the list
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = *head, *next_node = *head;

	if (head == NULL || *head == NULL)
	{
		return (*head);
	}

	*head = NULL;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		current_node->next = *head;
		*head = current_node;
		current_node = next_node;
	}
	return (*head);
}
