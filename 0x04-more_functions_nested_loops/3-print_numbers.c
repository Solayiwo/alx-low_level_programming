#include "main.h"

/**
 * print_numbers - Entry point
 *
 * Description: Function that prints the numbers, from 0 to 9
 * using void print_numbers(void) prototype.
 *
 * Return: void
*/

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}
