#include "lists.h"

/**
 * print_listint - print ints using list
 * @h: pointer to head of list
 * Return: intc
 *
 */

size_t print_listint(const list_t *h)
{
	size_t intc;

	for (intc = 0; h != NULL; h = h->next, intc++)
	{
		printf("%d\n", h->n);
	}
	return (intc);
}
