#include "lists.h"

/**
 * list_len - dertemines the number of nodes in a linked list
 * @h: head pointer
 * Return: No. of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}

	return (count);
}
