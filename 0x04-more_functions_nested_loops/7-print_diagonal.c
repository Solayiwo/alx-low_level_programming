#include "main.h"

/**
 * print_diagonal - Entry point
 *
 * Description: Function that draws a diagonal line on the terminal
 * using void print_diagonal(int n) prototype.
 *@n: Parameter to be checked
 *
 * Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;
	
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
