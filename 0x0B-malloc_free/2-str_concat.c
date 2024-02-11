#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - Entry point
 * Description: function that concatenates two strings.
 * @s1: string to be concatenated upon
 * @s2: string to be concatenated to s1
 * Return: NULL upon failure
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		k++;
	str = malloc(sizeof(char) * k);

	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		str[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		str[j++] = s2[i];
	return (str);
}
