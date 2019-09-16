#include "lists.h"
/**
 * sum_dlistint - function that adds value of all ndoes
 * @head: ptr 2 list
 * Return: total
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new = head;
	int total = 0;

	if (new == NULL)
	{
		return (0);
	}
	while (new != NULL)
	{
		total = total + new->n;
		new = new->next;
	}
	return (total);
}
