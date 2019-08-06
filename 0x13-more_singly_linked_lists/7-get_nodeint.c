#include "lists.h"
/**
 * get_nodeint_at_index - node at given index
 * @head: list beginning
 * @index: # of index to get
 * Return: node and 0
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int x = 0;

	new = head;
	while (!new)
	{
		if (index == x)
		{
			return (head);
		}
		new = new->next;
		head = new;
		x++;
	}
	return (0);
}
