#include "lists.h"

/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer to the first node of a linked list
 * Return: No. of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp = h;

	if (h == NULL)
	{
		return (1);
	}

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}

	return (count);
}
