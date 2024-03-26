#include "lists.h"

/**
 *  delete_dnodeint_at_index- Entry point
 * Description: deletes the node at index index of a dlistint_t linked list
 * @index: index of the node
 * @head: head of the list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1, *h2;
	unsigned int i = 0;

	h1 = *head;

	if (h1)
		while (h1->prev)
			h1 = h1->prev;

	while (h1)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next)
					h1->next->prev = h2;
			}

			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}

	return (-1);
}
