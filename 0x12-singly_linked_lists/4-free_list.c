#include "lists.h"
/**
 * free_list - function that frees a linked list
 * @head: element to be freed
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != '\0')
	{
		new = head;
		free(new->str);
		free(new);
		head = head->next;
	}
}
