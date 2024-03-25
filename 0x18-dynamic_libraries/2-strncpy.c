#include "main.h"

/**
 * _strncpy - Entry point
 * Description: Function that copy a string
 * @dest: pointer destination
 * @src: pointer source
 * @n: variable
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
