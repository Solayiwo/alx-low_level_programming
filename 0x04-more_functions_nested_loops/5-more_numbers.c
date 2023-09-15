#include "main.h"

/**
 * more_numbers - Entry point
 *
 * Description: Function that prints 10 times the numbers, from 0 to 14
 * using void more_numbers(void) prototype.
 *
 * Return: void
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
