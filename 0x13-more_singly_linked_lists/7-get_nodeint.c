#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of the listint-t
 * @head: pointer to the first node of the linked list
 * @index: position from which a given node is found
 * Return: pointer to the node located at the given position
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int i = 0;
	size_t count = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	if (index >= count)
	{
		return (NULL);
	}

	tmp = head;
	for (; i <= index - 1; i++)
	{
		tmp = tmp->next;
	}

	return (tmp);
}
