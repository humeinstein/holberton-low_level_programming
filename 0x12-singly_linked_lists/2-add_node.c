#include "lists.h"
/**
 *
 *
 *
 *
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t  *new;
	int x = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free (new);
		return (NULL);
	}
	new->str = strdup(str);
	while (new->str)
	{
		x++;
	}
	new->len = x;
	new->next = *head;
	*head = new;
	free (new);
	return (*head);
}
