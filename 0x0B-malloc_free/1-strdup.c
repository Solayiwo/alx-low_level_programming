#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - Entry point
 * Description: function that returns a pointer to a newly
 * allocated space in memory
 * @str: The string to duplicate
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newstr = (char *)malloc(sizeof(char) * (i + 1));

	if (newstr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		newstr[j] = str[j];

	return (newstr);
}
