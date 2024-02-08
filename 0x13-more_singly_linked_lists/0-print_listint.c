#include "lists.h"

/**
 * print_listint - Entry point
 * Description: prints all the elements of a listint_t list
 * @h: singly linked list
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node;

	num_node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_node++;
	}
	return (num_node);
}
