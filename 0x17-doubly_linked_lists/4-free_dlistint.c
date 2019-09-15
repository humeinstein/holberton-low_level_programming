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
		free(new->prev);
		free(new);
		head = head->next;
	}
}
