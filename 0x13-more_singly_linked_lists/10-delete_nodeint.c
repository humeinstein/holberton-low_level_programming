#include "lists.h"

/**
 * delete_nodeint_at_index - removing node at idx
 * @head: input &head
 * @index: input idx
 * Return: 1 for success -1 for fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new;
	listint_t *newer;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		holder = (*head)->next;
		free(*head);
		*head = newer;
		return (1);
	}
	count = 1;
	new = *head;
	while (count < index)
	{
		if (new == NULL)
			return (-1);
		new = new->next;
		count++;
	}
	newer = new->next;
	new->next = newer->next;
	free(newer);
	return (1);
}
