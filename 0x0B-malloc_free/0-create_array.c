#include "main.h"
#include <stdlib.h>

/**
 * *create_array - Entry point
 * Description: function that creates an array of chars
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
