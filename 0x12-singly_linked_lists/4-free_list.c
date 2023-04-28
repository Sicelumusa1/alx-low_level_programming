#include "lists.h"

/**
 * free_list - frees memory used by list_t
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
