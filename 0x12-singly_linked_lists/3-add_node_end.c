#include "lists.h"
/**
 * add_node_end - function that appends to end of linked list
 * @head: pointer to next node
 * @str: string to be put in
 * Return: Null or print node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *newer;
	unsigned int x = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	while (str[x])
		x++;
	new->len = x;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		newer = *head;
		while (newer->next != NULL)
		{
			newer = newer->next;
		}
		newer->next = new;
	}
	return (*head);
}
