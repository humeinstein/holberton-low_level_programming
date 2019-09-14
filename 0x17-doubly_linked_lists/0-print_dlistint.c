#include "lists.h"
/**
 * print_dlistint - function that prints all elements of dli
 * @h: pointer to current node
 * Return: inc how many elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t inc;
	inc = 0;

	while (h != NULL)
	{
		inc++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (inc);
}
