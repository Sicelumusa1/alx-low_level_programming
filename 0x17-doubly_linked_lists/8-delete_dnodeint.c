#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at given index
 * of a doubly linked list
 * @head: pointer to the pointer with address of first node
 * @index: position from which a node must be deleted
 * Return: 1 if successful, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}

	while (temp != NULL && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	temp->prev->next = temp->next;

	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;	
	}

	free(temp);
	return (1);
}
