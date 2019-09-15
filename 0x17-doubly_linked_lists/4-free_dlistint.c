#include "lists.h"
/**
 *
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != '\0')
	{
		new = head;
		free(head);
		head = new->next;
	}
}
