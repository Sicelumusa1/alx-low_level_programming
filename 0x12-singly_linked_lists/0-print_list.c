#include "lists.h"

/**
 * print_list - prints all elements of a linked list
 * @h: pointer containg  the  address of the first node of the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(ptr->str), ptr->str);
		}
		ptr = ptr->next;
		count++;
	}

	return (count);
}

