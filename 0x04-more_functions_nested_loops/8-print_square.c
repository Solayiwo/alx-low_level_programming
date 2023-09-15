#include "main.h"

/**
 * print_square - Entry point
 *
 * Description: Function that print a square size
 * using void print_square(int size) prototype.
 *@size: Parameter to be checked
 *
 * Return: void
*/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size); j++)
			_putchar('#');
		_putchar('\n');
	}
}
