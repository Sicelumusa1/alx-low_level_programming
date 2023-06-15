#include "lists.h"

/**
 * get_dlnodeint_at_index - finds node at given index
 * @head: pointer to the first node of the list
 * @index: position from which to retrieve a node
 * Return: pointer to the node at given position or NULL if node doesnt exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < index; count++)
	{
		temp = temp->next;
	}

	return (temp);
}

