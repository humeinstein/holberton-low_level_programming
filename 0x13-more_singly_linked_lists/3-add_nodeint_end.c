#include "lists.c"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * add_nodeint_end - add node to end of list
 * @head: pointer to next ele
 * @n: int
 * Return: Null or *head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *newer;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
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
