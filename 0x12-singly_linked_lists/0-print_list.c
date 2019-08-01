#include "lists.h"

/**
 *
 *
 *
 *
 */

size_t print_list(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%i] %s\n", h->len, h->str);
		x++;
		h = h->next;
	}
	return(x);
}
