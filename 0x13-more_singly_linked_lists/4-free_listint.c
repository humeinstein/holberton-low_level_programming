#include "lists.h"
/**
 * free_listint - func that frees a singly linked list
 * @head: next ele
 *
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}
