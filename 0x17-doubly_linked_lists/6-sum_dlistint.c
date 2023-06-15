#include "lists.h"

/**
 * sum_dlistint - adds data of all the node in a doubly linked list
 * @head: pointer to the first node of the list
 * Return: Sum of all data in a list, 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (temp != NULL && temp->next != NULL)
	{
		temp = temp->next;
		sum += temp->n;
	}

	return (sum);
}
