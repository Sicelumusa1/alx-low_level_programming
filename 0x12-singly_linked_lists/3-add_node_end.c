#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: pointer to the first node
 * @str: string contained
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tmp, *ptr;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = (list_t *) malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	tmp->next = ptr;

	return (ptr);
}
