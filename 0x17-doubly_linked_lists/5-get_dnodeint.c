#include "lists.h"
/**
 * get_dnodeint_at_index - get node at given index
 * @head: ptr
 * @index: desired node
 * Return: (NULL)
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new = head;
	unsigned int x = 0;

	while (new)
	{
		while (x == index)
		{
			return (new);
		}
		new = new->next;
		x++;
	}
	return (NULL);
}
