#include "lists.h"
/**
 * list_len - return # of elemnts in linked li
 * @h: pointer
 * Return: x
 *
 */

size_t list_len(const list_t *h)
{
	int x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
