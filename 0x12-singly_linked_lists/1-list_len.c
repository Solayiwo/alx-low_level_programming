#include "lists.h"

/**
 * list_len - Entry point
 * Description: Function that returns the number of elements
 * in a linked list_t list
 * @h: singly linked list
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num_elem;

	num_elem = 0;
	while (h != NULL)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
