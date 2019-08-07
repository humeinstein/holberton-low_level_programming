#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: input head address
 * Return: reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *new = NULL;
	listint_t *newnon;

	if (*head == NULL)
	{
		return (NULL);
	}
	while (*head == NULL)
	{
		newnon = (*head)->next;
		(*head)->next = new;
		new = *head;
		*head = newnon;
	}
	*head = newnon;
	return (*head);
}
