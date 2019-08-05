#include "lists.h"
/**
 * add_nodeint - function that adds new nodes
 * @head: pointer to ele
 * @n: int in ele
 * Return: the node(s)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *newer;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		newer = *head;
		while (temp->next != NULL)
		{
			newer = newer->next;
		}
		newer->next = new;
	}
	return (*head);
}
