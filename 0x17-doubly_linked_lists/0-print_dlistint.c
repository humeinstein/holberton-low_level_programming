#include "lists.h"
/**
 *
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t x;
	x = 0;

	while (h != NULL)
	{
		x++;
		printf("%d\n", h->next);
		h = h->next;
		x++;
	}
	return (x);
}
