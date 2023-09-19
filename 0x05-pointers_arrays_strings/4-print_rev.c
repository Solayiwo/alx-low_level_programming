#include "main.h"

/**
 * print_rev - Entry point
 * Description: Print a string, in reverse followed by a new line.
 * @str: Type char pointer
 * Return: void
 */

void print_rev(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != 0; i++)
	{
	}
	for  (i = i - 1; i >= 0; i--)
	{
		j = str[i];
		_putchar(j);
	}
	_putchar('\n');
}
