#include "lists.h"

/**
 * add_node - adds a node a the beginning of a linked list
 * @head: pointer to the first node of the list
 * @str: string contained
 * Return: pointer to the newly added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = (list_t *) malloc(sizeof(list_t));

	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->str = strdup(str);

	ptr->next = *head;

	*head = ptr;

	return (*head);
}
