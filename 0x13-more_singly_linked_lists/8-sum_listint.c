#include "lists.h"

/**
 * sum_listint - adds all the data(values) of listint_t
 * @head: pointer to the first node of listint_t
 * Return: sum of all data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
