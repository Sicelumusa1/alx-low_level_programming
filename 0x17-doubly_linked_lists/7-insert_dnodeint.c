#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at  a given index in 
 * a doubly linked list
 * @h: pointer to the pointer with address of the first node
 * @idx: position before which a node must be inserted
 * @n: data of the node to insert
 * Return: pointer to the newly inserted node or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h;
	dlistint_t *temp2 = malloc(sizeof(dlistint_t));

	if (temp2 == NULL)
	{
		return (NULL);
	}
	temp2->n = n;

	if (*h == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		temp2->prev = NULL;
		temp2->next = temp;
		if(temp != NULL)
		{
			temp->prev = temp2;
		}
		*h = temp2;
		return (temp2);
	}

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		free(temp2);
		return (NULL);
	}

	temp2->prev = temp;
	temp2->next = temp->next;
	
	if(temp->next != NULL)
	{
		temp->next->prev = temp2;
	}
	temp->next = temp2;
	return (temp2);
}
