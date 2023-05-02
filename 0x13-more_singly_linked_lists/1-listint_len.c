#include "lists.h"

/**
 * listint_len - determines the number of elements i a linked listint_t list
 * @h: pointer to the first node of the linked list
 * Return: number of elements(nodes)
 */

size_t listint_len(const listint_t *h)
{
	size_t count  = 0;
	const listint_t *tmp = h;

	if (h == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}

	return (count);
}
