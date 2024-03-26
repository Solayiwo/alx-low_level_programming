#include "lists.h"

/**
 * *add_dnodeint - Entry point
 * Description: adds a new node at the beginning of a dlistint_t list
 * @n: doubly linked list
 * @head: head of the list
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	h = *head;

	if (h)
	{
		while (h->prev)
			h = h->prev;
	}

	new->next = h;

	if (h)
		h->prev = new;

	*head = new;

	return (new);
}
