#include "main.h"
#include <string.h>

/**
 * *_strncat - Entry point
 * Description: Function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Number of char to concatenates
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int len = strlen(dest);

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = src[i];
		src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
