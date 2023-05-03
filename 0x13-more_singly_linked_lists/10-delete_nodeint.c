#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at given position in a linked list
 * @head: pointer to pointer that stores the address of the first node
 * @index: position from which a node must be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, count = 0;
	listint_t *node_to_delete, *tmp = *head;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	if (index == 0)
	{
		node_to_delete = *head;
		*head = (*head)->next;
		free(node_to_delete);
		return (1);
	}

	if (index > count)
	{
		return (-1);
	}

	tmp = *head;
	while (i < index - 1 && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (tmp == NULL || tmp->next == NULL)
	{
		return (-1);
	}

	node_to_delete = tmp->next;
	tmp->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}
