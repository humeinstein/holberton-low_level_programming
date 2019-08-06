#include "lists.h"
/**
 * pop_listint - delete head node
 * @head: pointer to ele
 *
 * Return: head data after free or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		new = *head;
		n = new->n;
		new = new->next;
		free(*head);
		*head = new;
	}
	return (n);
}
