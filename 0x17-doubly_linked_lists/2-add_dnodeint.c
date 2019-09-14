#include "lists.h"
/**
 * *add_dnodeint - function tht adds node at beginning of list
 * @n: current node
 * @head: ptr to beginning of linked list??
 * Return: *head new node or null if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->prev = NULL;

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
