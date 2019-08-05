#include "lists.h"
/**
 * listint_len - function to print amount of elements in list
 * @h: pointer to head
 *
 * Return: # of ele
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
