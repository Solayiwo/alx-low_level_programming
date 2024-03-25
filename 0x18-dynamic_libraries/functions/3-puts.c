#include "main.h"

/**
 * _puts - Entry point
 * Description: Print a string, followed by a new line, to stdout.
 * @str: Type char pointer
 * Return: void
 */
void _puts(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != 0; i++)
	{
		j = str[i];
		_putchar(j);
	}
	_putchar('\n');
}
