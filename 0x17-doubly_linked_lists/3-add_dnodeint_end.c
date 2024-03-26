#include "lists.h"

/**
 * *add_dnodeint_end - Entry point
 * Description: adds a new node at the end of a dlistint_t list
 * @n: doubly linked list
 * @head: head of the list
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	h = *head;

	if (h)
	{
		while (h->next)
			h = h->next;
		h->next = new;
	}
	else
		*head = new;

	new->prev = h;

	return (new);
}
