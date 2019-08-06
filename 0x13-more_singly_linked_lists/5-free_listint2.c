#include "lists.h"
/**
 * free_listint2 - function that free and set head to null
 * @head: pointerptr
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head != NULL)
	{
		new = *head;
		while (new != NULL)
		{
			free(new);
			new = new->next;
		}
		*head = NULL;
	}
}
