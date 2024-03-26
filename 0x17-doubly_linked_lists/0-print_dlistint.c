#include "lists.h"

/**
 * print_dlistint - Entry point
 * Description: prints all the elements of a dlistint_t list
 * @h: doubly linked list
 * Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (!h)
		return (count);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
