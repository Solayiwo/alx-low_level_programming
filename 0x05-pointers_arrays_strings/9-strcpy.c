#include "main.h"

/**
 * *_strcpy - Entry point
 * Description: Copies the string pointed to by src.
 * @dest: Type char pointer
 * @src: Type char pointer
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
