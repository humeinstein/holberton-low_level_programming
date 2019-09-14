#include "lists.h"
/**
 * dlistint_len - function that prints # of ele in a list
 * @h: pointer to curr ele
 * Return: count
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
