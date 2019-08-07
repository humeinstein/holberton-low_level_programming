\#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at given pos
 * @head: beginning
 * @idx: index
 * @n: new node data
 * Return: New node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *newer = *head;
	unsigned int x = 0;

	if (**head == NULL && idx > 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	while (newer != NULL)
	{
		if (x == idx - 1)
		{
			new->n = n;
			new->next = newer->next;
			newer->next = new;
			return (new);
		}
		newer = newer->next;
		x++;
	}
	free(new);
	return (NULL);
}
