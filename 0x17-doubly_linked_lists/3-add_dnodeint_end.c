#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a doubly linked list
 * @head: pointer to the pointer that has the address of the first node
 * @n: data of the node to be added
 * Return: pointer to the new node or  NULL if  the process fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = *head;
	dlistint_t *temp2 = malloc(sizeof(dlistint_t));

	if (temp2 == NULL)
	{
		return (NULL);
	}
	temp2->next = NULL;
	temp2->n = n;
	temp2->prev = NULL;

	if (*head == NULL)
	{
		*head = temp2;
		return (temp2);
	}

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
	}
	temp2->prev = temp;
	temp->next = temp2;
	return (temp2);
}
