#include "lists.h"

/**
 * print_dlistint_t - prints all the elements of a doubly linked list
 * @h: pointer to the first node of the list
 * Return: Number of node in the list, 0 if the list is empty
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (temp != NULL)
	{
		printf("%d\n",temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
