#include "lists.h"
/**
 * sum_listint - get sum of all ele
 * @head: ptr to node
 * Return: sum
 *
 */
int sum_listint(listint_t *head)
{
	int x;

	for (x = 0; head != '\0'; head = head->next)
		x = x + head->n;

	return (x);
}
