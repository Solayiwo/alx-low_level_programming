#include "lists.h"

/**
 * sum_dlistint - Entry point
 * Description: returns the sum of all the data (n) of a dlistint_t linked list
 * @head: head of the list
 * Return: sum of the data, else 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head->prev)
			head = head->prev;

		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
