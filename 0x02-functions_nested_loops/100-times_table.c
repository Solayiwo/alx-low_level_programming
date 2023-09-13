#include "main.h"

/**
 * print_times_table - Entry point
 *
 * Description: function that prints the n times table, starting
 * with 0 using void print_times_table(int n) prototype
 *
 *@n: Fisrt parameter to be checked
 *
*/

void print_times_table(int n)
{
	int num1 = 0, row, col;

	if (n > 15 || n < 0)
		return;
	while (num1 <= n)
	{
		for (row = 0; row <= n; row++)
		{
			col = num1 * row;
			if (col > 99)
			{
				_putchar(col / 100 + '0');
				_putchar((col / 10 % 10) + '0');
				_putchar(col % 10 + '0');
			}
			else if (col > 9)
			{
				_putchar(' ');
				_putchar(col / 10 + '0');
				_putchar(col % 10 + '0');
			}
			else if (row != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(col + '0');
			}
			else
				_putchar(col + '0');

			if (row != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		num1++;
	}
}
