#include "lists.h"

/**
 * free_list - Entry point
 * Description: Function that frees a list_t list
 * @head: head of the linked list
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
