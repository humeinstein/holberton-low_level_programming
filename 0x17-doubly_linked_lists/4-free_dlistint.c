#include "lists.h"
/**
 * free_dlistint - free dbl
 * @head: dbl
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	new = head;
	while (head)
	{
		new = head;
		free(head);
		head = new->next;
	}
}
