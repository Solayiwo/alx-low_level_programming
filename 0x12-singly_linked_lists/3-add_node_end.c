#include "lists.h"

/**
 * *add_node_end - Entry point
 * Description: Function that adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	unsigned int x;
	unsigned int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	for (x = 0; str[x] != '\0'; x++)
		count++;

	new_node->len = count;
	new_node->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (*head);
}
