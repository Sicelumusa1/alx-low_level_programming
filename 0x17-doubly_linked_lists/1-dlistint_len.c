#include "lists.h"

/**
 * dlistint_len - determines the length of a doubly linked list
 * @h: pointer to the first node of the list
 * Return: Number of nodes in a list, 0 if the list is empty
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}
	 while (temp != NULL)
	 {
		 temp = temp->next;
		 count++;
	 }
	 return (count);
}
