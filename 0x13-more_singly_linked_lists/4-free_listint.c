#include "lists.h"

/**
 * free_listint - Entry point
 * Description: Function that frees a listint_t list
 * @head: head of the linked list
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
