#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer containing address of the first node of listint_t
 * @idx: position after which a new node must be inserted
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
		while (i < idx)
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

	return (tmp->next);
}
