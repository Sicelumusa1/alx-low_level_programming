#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginnig of listint list
 * @head: pointer to the pointer of the first node of a linked list
 * @n: integer to add at the beginning of a linked list
 * Return: pointer to newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (*head);
}
