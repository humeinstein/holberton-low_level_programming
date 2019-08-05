#include "lists.h"
/**
 *
 *
 *
 *
 */
size_t listint_len(const listint_t *h);
{
	listint_t newc;
	newc = 0;

	while (h != NULL)
	{
		h = h->next;
		newc++;
	}
	return (newc);
}
