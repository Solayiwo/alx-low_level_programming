#include "main.h"

/**
 * print_line - Entry point
 *
 * Description: Function that draws a straight line in the terminal
 * using void void print_line(int n) prototype.
 *@n: Parameter to be checked
 *
 * Return: void
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
