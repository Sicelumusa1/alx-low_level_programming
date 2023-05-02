#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer containing address of the first node of listint_t
 * @idx: position just before which a new node must be inserted
 * @n: data of the new node
 * Return: pointer to newly created node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	unsigned int count = 0;
	listint_t *new_node, *tmp;

	if (*head == NULL)
	{
		return (NULL);
	}

	if (idx == 0)
	{
		new_node = (listint_t *) malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	tmp = *head;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		tmp = *head;
		while (i < idx - 1)
		{
			tmp = tmp->next;
			i++;
		}
	}

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
