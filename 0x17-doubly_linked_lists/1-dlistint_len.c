#include "lists.h"

/**
 * dlistint_len - Entry point
 * Description: returns the number of elements in a linked dlistint_t list
 * @h: doubly linked list
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	if (!h)
		return (count);

	while (h->prev)
		h = h->prev;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
