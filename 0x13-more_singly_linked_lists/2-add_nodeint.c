#include "lists.h"
/**
 * add_nodeint - function that adds new nodes
 * @head: pointer to ele
 * @n: int in ele
 * Return: the node(s)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
