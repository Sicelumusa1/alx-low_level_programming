#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of listint_t list
 * @head: pointer to pointer to first node of listint_t
 * @n: the integer to for the newly added node
 * Return: pinter to the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;

	return (tmp->next);
}

